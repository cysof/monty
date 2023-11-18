#include "monty.h"
void printtopstack(const stack1_t **h, unsigned int ln);
/**
 * printtopstack - print top only
 * @h: the first node
 * @ln: =========
 * Return: NULL
 */
void printtopstack(const stack1_t **h, unsigned int ln)
{
	const stack1_t *curr = variables.head2;

	(void)h;
	if (curr == NULL)
	{
		dprintf(2, "L%d: can't pint, stack empty\n", ln);
		exit(EXIT_FAILURE);
	}
	while (curr != NULL)
	{
		printf("%d\n", curr->n);
		break;
		/*curr = curr->next;*/
		/*i++;*/
	}
	/*free_stack(h);*/
}
