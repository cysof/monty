#include "monty.h"
/**
 * stack_func - initiate stack mode
 * @stack: structure
 * @line_number: line number
 * Return: null
 */
void stack_func(stack1_t **stack, unsigned int line_number)
{
	stack1_t *head = variables.head2;

	(void)stack;
	(void)line_number;
	updatetostackmode(&head, line_number);
}
