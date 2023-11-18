#include "monty.h"
/**
 * queue_func - ======
 * @stack: - ========
 * @line_number: ======
 * Return: null
 */
void queue_func(stack1_t **stack, unsigned int line_number)
{
	stack1_t *head = variables.head2;

	(void)stack;
	(void)line_number;
	updatetoqueuemode(&head, line_number);
}
