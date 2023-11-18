#include "monty.h"

/**
 * f_add - Adds the top two elements of the stack.
 * @head: Pointer to the head of the stack.
 * @number: Line number in the bytecode file.
 */
void f_add(stack_t **head, unsigned int number)
{
	if (*head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", number);
		exit(EXIT_FAILURE);
	}

	(*head)->next->n += (*head)->n;
	f_pop(head, number);
}

