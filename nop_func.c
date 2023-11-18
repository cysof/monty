#include "monty.h"
/**
 * nop_func - do nothing
 * @stack: structure
 * @line_number: line number
 * Return: Null
 */
void nop_func(stack1_t **stack, unsigned int line_number)
{
	stack1_t *head = variables.head2;

	(void)line_number;
	(void)stack;
	nopdonothing(&head, line_number);
}
