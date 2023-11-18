#include "monty.h"
#include <stdio.h>

/**
 * f_swap - Swaps the top two elements of the stack.
 * @head: Pointer to the head of the stack.
 * @number: Line number in the bytecode file.
 */
void f_swap(stack_t **head, unsigned int number)
{
	stack_t *first = *head;
	stack_t *second = (*head)->next;

	if (*head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", number);
		exit(EXIT_FAILURE);
	}

	first->next = second->next;
	if (second->next != NULL)
	{
		second->next->prev = first;
	}

	second->prev = NULL;
	second->next = first;
	first->prev = second;

	*head = second;
}

