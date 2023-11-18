#include "monty.h"
/**
 * swap_func - swap top 2
 * @stack: structure
 * @line_number: line number in file
 */
void swap_func(stack1_t **stack, unsigned int line_number)
{
	stack1_t *head = variables.head2;

	(void)line_number;
	(void)stack;
	swaptoptwostack(&head, line_number);
}
