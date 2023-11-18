#include "monty.h"
/**
 * popstackitem - pop the top of the stack
 * @head: first item
 * @ln: line number of the file
 * Return: return null
 */
void popstackitem(stack1_t **head, unsigned int ln)
{

	stack1_t *temp = variables.head2;

	*head = variables.head2;
	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", ln);
		exit(EXIT_FAILURE);
		return;
	}

	*head = (*head)->next;
	if (*head != NULL)
	{
		(*head)->prev = NULL;
	}
	variables.head2 = *head;
	free(temp);
}
