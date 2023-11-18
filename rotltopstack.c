#include "monty.h"
void rotltopstack(stack1_t **head, unsigned int ln);
/**
 * rotltopstack - rotate top
 * @head: first item
 * @ln: line number
 * Return: null
 */
void rotltopstack(stack1_t **head, unsigned int ln)
{
	stack1_t *first;
	stack1_t *last;

	(void)ln;
	*head = variables.head2;
	if (*head == NULL || (*head)->next == NULL)
	{
		;
	}
	else
	{
		first = *head;
		last = *head;

		while (last->next)
			last = last->next;

		*head = first->next;
		last->next = first;
		first->prev = last;
		first->next = NULL;
		(*head)->prev = NULL;
		variables.head2 = *head;
	}
}
