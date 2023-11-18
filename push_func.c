#include "monty.h"
/**
 * push_func - push opcode
 * @stack: stack datastructure
 * @line_number: line number in file
 * Return: NULL
 */
void push_func(stack1_t **stack, unsigned int line_number)
{
	char **data = loadlinedatatolist(line_number, variables.filename);
	*stack = variables.head2;
	if (strcmp(variables.mode, "stack") == 0)
		addnodetostackfront(stack, atoi(data[1]));
	else if (strcmp(variables.mode, "queue") == 0)
	{
		addnodetostackend(stack, atoi(data[1]));
	}
	/*	freedata(&data);*/
}
