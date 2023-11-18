#include "monty.h"
void pstrtopstack(const stack1_t **h, unsigned int ln);
/**
 * pstrtopstack - ==========
 * @h: ===========
 * @ln: =========
 * Return: int
 */
void pstrtopstack(const stack1_t **h, unsigned int ln)
{
	const stack1_t *curr = variables.head2;

	(void)h;
	(void)ln;

	while (curr != NULL)
	{
		if (curr->n <= 0 || curr->n > 127)
			break;
		printf("%c", (char)curr->n);
		curr = curr->next;
		/*i++;*/
	}
	printf("\n");
	/*free_stack(h);*/
}
