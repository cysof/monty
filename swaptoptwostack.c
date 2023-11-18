#include "monty.h"
/**
 * swaptoptwostack - swap stack
 * @head: first node
 * @ln: line number in file
 */
void swaptoptwostack(stack1_t **head, unsigned int ln)
{
	stack1_t *first;
	stack1_t *second;

	*head = variables.head2;
	if (*head == NULL || (*head)->next == NULL)
	{
		dprintf(2, "L%d: can't swap, stack too short\n", ln);
		exit(EXIT_FAILURE);
		return;
	}

	first = *head;
	second = (*head)->next;

	first->next = second->next;
	if (second->next != NULL)
	{
		second->next->prev = first;
	}

	second->prev = NULL;
	second->next = first;
	first->prev = second;

	/**head = second;*/
	variables.head2 = second;
}
