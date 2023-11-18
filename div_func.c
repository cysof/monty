#include "monty.h"
/**
 * div_func - div first from second and short 1
 * @stack: structure
 * @line_number: line number
 * Return: null
 */
void div_func(stack1_t **stack, unsigned int line_number)
{
	stack1_t *head = variables.head2;

	(void)line_number;
	(void)stack;
	divtwoAndReplace(&head, line_number);


}
