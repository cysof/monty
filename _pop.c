#include "monty.h"
/**
 * f_pop - Remove the top element of the stack.
 * @head: pointer to the head of the stack.
 * @number: Line number in the bytcode file.
 */
void f_pop(stack_t **head, unsigned int number)
{
	stack_t *temp = *head;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", number);
		exit(EXIT_FAILURE);
	}
	*head = (*head)->next;
	if (*head != NULL)
	{
		(*head)->prev = NULL;
	}
	free(temp);
}
