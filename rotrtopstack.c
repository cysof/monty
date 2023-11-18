#include "monty.h"
void rotrtopstack(stack1_t **head, unsigned int ln);
/**
 * rotrtopstack - rotate bottom
 * @head: head
 * @ln: line number
 * Return: null
 */
void rotrtopstack(stack1_t **head, unsigned int ln)
{
	stack1_t *last;
	stack1_t *first;

	(void)ln;
	*head = variables.head2;
	if (*head == NULL || (*head)->next == NULL)
	{
		;
	}
	else
	{
		first = last = *head;
		while (last->next)
		{
			last = last->next;
		}
		last->prev->next = NULL;
		last->prev = NULL;
		last->next = first;
		first->prev = last;
		*head = last;
		variables.head2 = last;
	}
}
