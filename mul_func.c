#include "monty.h"

/**
 * mul_func - mul first and two
 * @stack: structure
 * @line_number: line number
 * Return: null
 */
void mul_func(stack1_t **stack, unsigned int line_number)
{
	stack1_t *head = variables.head2;

	(void)stack;
	(void)line_number;
	multwoAndReplace(&head, line_number);
}
