#include "monty.h"
/**
 * pchar_func - print first character in ascii value
 * @head: the first item in the list
 * @ln: line number
 * Return: null
 */
void pchar_func(stack1_t **head, unsigned int ln)
{
	const stack1_t *h = variables.head2;

	(void)ln;
	(void)head;
	pchartopstack(&h, ln);
}
