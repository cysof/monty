#include "monty.h"
/**
 * createNodesub - create node
 * @data: integer
 * Return: node
 */
stack1_t *createNodesub(int data)
{
	stack1_t *newNode = (stack1_t *)malloc(sizeof(stack1_t));

	if (newNode == NULL)
	{
		dprintf(2, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	newNode->n = data;
	newNode->next = NULL;
	newNode->prev = NULL;
	return (newNode);
}


/**
 * subtwoAndReplace - sub first from second and short 1
 * @head: first item
 * @ln: line number
 * Return: null
 */
void subtwoAndReplace(stack1_t **head, unsigned int ln)
{
	stack1_t *first;
	stack1_t *second;
	int sub;
	stack1_t *newNode;

	*head = variables.head2;
	if (*head == NULL || (*head)->next == NULL)
	{
		dprintf(2, "L%d: can't sub, stack too short\n", ln);
		exit(EXIT_FAILURE);
		return;
	}

	first = *head;
	second = (*head)->next;
	sub = second->n - first->n;

	/*Remove the top two nodes */
	*head = second->next;
	if (*head != NULL)
	{
		(*head)->prev = NULL;
	}
	free(first);
	free(second);

	/* Create a new node with the sum */
	newNode = createNodesub(sub);
	if (*head != NULL)
	{
		newNode->next = *head;
		(*head)->prev = newNode;
	}
	/**head = newNode;*/
	variables.head2 = newNode;
}
