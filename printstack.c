#include "monty.h"
void print_stack(const stack1_t **h, unsigned int ln);
/**
 * print_stack - print stack all nodes
 * @h:  interger
 * @ln: line number
 * Return: int
 */
void print_stack(const stack1_t  **h, unsigned int ln)
{
	stack1_t *curr = variables.head2;

	(void)h;
	(void)ln;
	while (curr)
	{
		printf("%d\n", curr->n);
		curr = curr->next;
	}
}
