#include "monty.h"
stack1_t *mallocend(stack1_t *node, const int data);
stack1_t *addnodetostackend(stack1_t **head, const int n);
/**
 * mallocend - malloc a new space to store node
 * @node: new node
 * @data:  integer
 * Return: new node
 */
stack1_t *mallocend(stack1_t *node, const int data)
{
	node = (stack1_t *) malloc(sizeof(stack_t));
	if (node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	node->n = data;
	node->prev = NULL;
	node->next = NULL;
	return (node);
}
/**
 * addnodetostackend - add node to the end , FIFO queue
 * @head: the first item
 * @n: data
 * Return: stack
 */
stack1_t *addnodetostackend(stack1_t **head, const int n)
{
	stack1_t *curr;
	stack1_t *temp;
	stack1_t *new = NULL;

	*head = variables.head2;
	curr = variables.head2;
	new = mallocend(new, n);
	if (new == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	if (curr == NULL)
	{
		*head = new;
		variables.head2 = *head;
		return (*head);
	}
	while (curr != NULL)
	{
		temp = curr;
		curr = curr->next;
	}
	new->prev = temp;
	temp->next = new;
	return (new);
}
