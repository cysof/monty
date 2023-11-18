#include "monty.h"
/**
 * validateOPCODE - validate tokens
 * @tokens: =========
 * Return: =====
 */
int validateOPCODE(char **tokens)
{
	char *opcode[] = {"push", "pall", "pint", "pop",
		"swap", "add", "nop", "sub", "div", "mul", "mod",
		"pchar", "pstr", "rotl", "rotr", "stack", "queue"};
	int i;

	variables.err_no = -2;
	(void)tokens;
	for (i = 0; i < 17; i++)
		if (strcmp(opcode[i], variables.var._token[0]) == 0)
			return (0);
	return (variables.err_no);



}
