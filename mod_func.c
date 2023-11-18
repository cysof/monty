#include "monty.h"
/**
 * mod_func - mod two files
 * @stack: structure
 * @line_number: line number
 * Return: null
 */
void mod_func(stack1_t **stack, unsigned int line_number)
{
	stack1_t *head = variables.head2;

	(void)line_number;
	(void)stack;
	 modtwoAndReplace(&head, line_number);
}
