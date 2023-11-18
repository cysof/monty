#include "monty.h"
/**
 * rotl_func - rotate front
 * @stack: structure
 * @line_number: line number
 * Return: null
 */
void rotl_func(stack1_t **stack, unsigned int line_number)
{
	stack1_t *head = variables.head2;

	(void)line_number;
	(void)stack;
	rotltopstack(&head, line_number);


}
