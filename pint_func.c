#include "monty.h"
/**
 * pint_func - print only the top
 * @stack: the structure
 * @line_number: line number
 * Return:null
 */
void pint_func(stack1_t **stack, unsigned int line_number)
{
	const stack1_t *head = variables.head2;

	(void)stack;
	(void)line_number;
	printtopstack(&head, line_number);
}
