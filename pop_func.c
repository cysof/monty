#include "monty.h"
/**
 * pop_func - pop the first item
 * @stack: structure
 * @line_number: line number of the file
 * Return: null
 */
void pop_func(stack1_t **stack, unsigned int line_number)
{
	stack1_t *head = *stack;

	(void)line_number;
	popstackitem(&head, line_number);
}
