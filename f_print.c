#include "monty.h"
/**
 * f_print - prints the value at the top of the stack.
 * @head: Pointer to the head of the stack
 * @number: line number in the bytecode file.
 */
void f_print(stack_t **head, unsigned int number)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't print, stack empty\n", number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
