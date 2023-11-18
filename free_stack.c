#include "monty.h"
void free_stack(stack1_t *head);
/**
 * free_stack - ==========
 * @head: ===========
 * Return: int
 */
void free_stack(stack1_t *head)
{
	stack1_t *curr = variables.head2;
	stack1_t *temp = NULL;
	(void)head;

	while (curr)
	{
		temp = curr;
		curr = curr->next;
		free(temp);
	}
	variables.head2 = NULL;
}
