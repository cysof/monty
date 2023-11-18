#include "monty.h"
void pchartopstack(const stack1_t **h, unsigned int ln);
/**
 * pchartopstack - ==========
 * @h: ===========
 * @ln: ===========
 * Return: int
 */
void pchartopstack(const stack1_t **h, unsigned int ln)
{
	const stack1_t *curr = variables.head2;

	if (curr == NULL || !curr || h == NULL || (*h) == NULL)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", ln);
		exit(EXIT_FAILURE);

	}
		if (curr->n > 127 || curr->n < 0)
		{
			fprintf(stderr, "L%d: can't pchar, value out of range\n", ln);
			exit(EXIT_FAILURE);
		}
		printf("%c\n", (char)curr->n);

		/*curr = curr->next;*/
		/*i++;*/
	/*free_stack(h);*/
}
