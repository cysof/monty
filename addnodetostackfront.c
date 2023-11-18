#include "monty.h"
stack1_t *mallocfirst(stack1_t *node, const int data);
void addnodetostackfront(stack1_t **head, const int n);
/**
 * mallocfirst - malloc=
 * @node: new node
 * @data: data
 * Return: node
 */
stack1_t *mallocfirst(stack1_t *node, const int data)
{
	node = (stack1_t *) malloc(sizeof(stack1_t));
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
 * addnodetostackfront - add node to the front of the list
 * @head: first item
 * @n: n is the data
 * Return: list
 */
void addnodetostackfront(stack1_t **head, const int n)
{
	stack1_t *curr;
	stack1_t *new = NULL;

	*head = variables.head2;
	curr = *head;
	new = mallocfirst(new, n);
	if (new == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	if (curr)
		curr->prev = new;

	new->next = curr;
	new->prev = NULL;
	*head = new;
	variables.head2 = new;
}
