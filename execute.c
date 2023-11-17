#include "monty.h"

/**
 * get_opcode_function - Get the function associated with an opcode.
 * @opcode: The opcode to look up.
 * Return: A function pointer to the corresponding opcode function.
 */
void (*get_opcode_function(char *opcode))(stack_t **, unsigned int)
{
    instruction_t opcodes[] = {
        {"push", f_push},
        {"pall", f_pall},
        /* Add more opcodes as needed */
        {NULL, NULL}  /* Sentinel to indicate the end of the array */
    };

    int i = 0;
    while (opcodes[i].opcode != NULL)
    {
        if (strcmp(opcodes[i].opcode, opcode) == 0)
            return opcodes[i].f;
        i++;
    }

    return NULL;  /* Opcode not found */
}

/**
 * execute - Execute a Monty bytecode instruction.
 * @content: The instruction to execute.
 * @head: Pointer to the head of the stack.
 * @counter: Line number of the instruction in the bytecode file.
 * @file: File pointer to the bytecode file.
 */
void execute(char *content, stack_t **head, unsigned int counter, FILE *file)
{
    char *opcode;
    void (*opcode_function)(stack_t **, unsigned int);
    (void)file;

    /* Clean the instruction content */
    opcode = clean_line(content);

    /* Check if opcode is empty or a comment */
    if (opcode == NULL || opcode[0] == '#' || opcode[0] == '\0')
        return;

    /* Get the function associated with the opcode */
    opcode_function = get_opcode_function(opcode);

    if (opcode_function == NULL)
    {
        fprintf(stderr, "L%d: unknown instruction %s\n", counter, opcode);
        exit(EXIT_FAILURE);
    }

    /* Call the opcode function with the stack and line number */
    opcode_function(head, counter);
}
