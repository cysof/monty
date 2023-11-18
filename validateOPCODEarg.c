#include "monty.h"
/**
 * hasLetter - ======
 * @token: =========
 * Return: ========
 */
int hasLetter(char *token)
{
	int i;

	for (i = 0; token[i] != '\0'; i++)
	{
		if (token[i] == '-' || token[i] == '+')
			continue;
		if (!isdigit(token[i]))
		{
			return (-1);
		}
	}
	return (0);
}
/**
 * validateOPCODEarg - ========
 * @token: ========
 * Return: =====
 */
int validateOPCODEarg(char **token)
{
	int i;
	char *otheropcode[] = {"pall", "pint", "pop", "swap",
		"add", "nop", "sub", "div", "mul",
		"mod", "pchar", "pstr", "rotl", "rotr", "stack", "queue"};

	(void)token;
	for (i = 0; i < 16; i++)
		if (strcmp(variables.var._token[0], otheropcode[i]) == 0)
			return (0);

	if (variables.var._token[1] == NULL)
	{
		variables.err_no = -1;
		return (-1);
	}
	variables.err_no = hasLetter(variables.var._token[1]);
	if (variables.err_no == -1)
		return (-1);

	return (0);
}
