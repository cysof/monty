#include "monty.h"
/**
 * pall_func - pall print all node
 * @stack: the datastructure
 * @line_number: line number
 * Return: done
 */
void pall_func(stack1_t **stack, unsigned int line_number)
{
	const stack1_t *h = variables.head2;

	(void)stack;
	(void)line_number;
	print_stack(&h, line_number);


}
