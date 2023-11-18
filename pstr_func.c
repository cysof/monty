#include "monty.h"
/**
 * pstr_func - print ascii characters
 * @head: first node
 * @ln: line number
 * Return: ==========
 */
void pstr_func(stack1_t **head, unsigned int ln)
{
	const stack1_t *h = variables.head2;

	(void)ln;
	(void)head;
	pstrtopstack(&h, ln);
}
