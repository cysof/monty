#include "monty.h"
/**
 * select_opcode - =======
 * @op_code: ======
 * Return: ====
 */
void (*select_opcode(char *op_code[]))(stack1_t **stack,
		unsigned int line_number)
{
	instruction_t opcode_funcs[] = {
		{"push", push_func},
		{"pall", pall_func},
		{"pint", pint_func},
		{"pop", pop_func},
		{"swap", swap_func},
		{"add", add_func},
		{"nop", nop_func},
		{"sub", sub_func},
		{"mul", mul_func},
		{"div", div_func},
		{"mod", mod_func},
		{"pchar", pchar_func},
		{"pstr", pstr_func},
		{"rotl", rotl_func},
		{"rotr", rotr_func},
		{"stack", stack_func},
		{"queue", queue_func}};

	int keys = 17;

	int j;

	for (j = 0; j < keys; j++)
		if (strcmp(opcode_funcs[j].opcode, op_code[0]) == 0)
			return (opcode_funcs[j].f);

	return (NULL);
}

