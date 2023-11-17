#include "monty.h"
/**
 * f_push - Pushes an element to stack.
 * @head: Pointer to the head of the stack
 * @number: the integer to push onto the stack.
 */
void f_push(stack_t **head, unsigned int number)
{
	if (!bus.content || !isdigit(bus.content[0]))
	{
		fprintf(stderr, "L%d: usage: push integer\n", number);
		exit(EXIT_FAILURE);
	}
	addnode(head, atoi(bus.content));
}

/**
 * f_pall - Prints all the values on the stack
 * @head: Pointer to the head of the stack.
 * @number: unsed parameter (line number).
 */
void f_pall(stack_t **head, unsigned int number)
{
	stack_t *current = *head;
	(void)number;
	
	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
