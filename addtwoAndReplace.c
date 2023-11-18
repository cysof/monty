#include "monty.h"
/**
 * createNode - create node
 * @data: data
 * Return: new node
 */
stack1_t *createNode(int data)
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
 * addtwoAndReplace - add two short 1
 * @head: the first item
 * @ln: line number of the file
 * Return: null
 */
void addtwoAndReplace(stack1_t **head, unsigned int ln)
{
	stack1_t *first;
	stack1_t *second;
	int sum;
	stack1_t *newNode;

	*head = variables.head2;
	if (*head == NULL || (*head)->next == NULL)
	{
		dprintf(2, "L%d: can't add, stack too short\n", ln);
		exit(EXIT_FAILURE);
		return;
	}

	first = *head;
	second = (*head)->next;
	sum = first->n + second->n;

	/*Remove the top two nodes */
	*head = second->next;
	if (*head != NULL)
	{
		(*head)->prev = NULL;
	}
	free(first);
	free(second);

	/* Create a new node with the sum */
	newNode = createNode(sum);
	if (*head != NULL)
	{
		newNode->next = *head;
		(*head)->prev = newNode;
	}
	/**head = newNode;*/
	variables.head2 = newNode;
}
