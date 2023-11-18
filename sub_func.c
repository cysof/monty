#include "monty.h"
/**
 * sub_func - sub two short 1
 * @stack: structure
 * @line_number: line number on the file
 * Return: null
 */
void sub_func(stack1_t **stack, unsigned int line_number)
{
	stack1_t *head = variables.head2;

	(void)stack;
	(void)line_number;
	subtwoAndReplace(&head, line_number);
}
