#include "monty.h"
/**
 * add_func - add top two, the list short 1 item
 * @stack: structure
 * @line_number: line number of the file
 */
void add_func(stack1_t **stack, unsigned int line_number)
{
	stack1_t *head = variables.head2;

	(void)stack;
	(void)line_number;
	addtwoAndReplace(&head, line_number);
}
