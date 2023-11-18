#include "monty.h"
/**
 * rotr_func - rotate bottom
 * @stack: structure
 * @line_number: number
 * Return: int
 */
void rotr_func(stack1_t **stack, unsigned int line_number)
{
	stack1_t *head = variables.head2;

	(void)stack;
	(void)line_number;
	rotrtopstack(&head, line_number);
}
