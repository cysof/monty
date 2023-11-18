#include "monty.h"
/**
 * createNodemul - create node
 * @data: integer
 * Return: null
 */
stack1_t *createNodemul(int data)
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
 * multwoAndReplace - mul two top numbers
 * @head: first node
 * @ln: line number
 * Return: null
 */
void multwoAndReplace(stack1_t **head, unsigned int ln)
{
	stack1_t *first;
	stack1_t *second;
	int mul;
	stack1_t *newNode;

	*head = variables.head2;
	if (*head == NULL || (*head)->next == NULL)
	{
		dprintf(2, "L%d: can't mul, stack too short\n", ln);
		exit(EXIT_FAILURE);
		return;
	}

	first = *head;
	second = (*head)->next;
	mul = second->n * first->n;

	/*Remove the top two nodes */
	*head = second->next;
	if (*head != NULL)
	{
		(*head)->prev = NULL;
	}
	free(first);
	free(second);

	/* Create a new node with the sum */
	newNode = createNodemul(mul);
	if (*head != NULL)
	{
		newNode->next = *head;
		(*head)->prev = newNode;
	}
	/**head = newNode;*/
	variables.head2 = newNode;
}
