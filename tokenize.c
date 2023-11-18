#include "monty.h"
/**
 * tokenize - tokens
 * @line: =====
 * Return: tokens arrays
 */
char **tokenize(char *line)
{
	const char delimiters[] = " \n\t$";
	/*	char **tokens = malloc(1024 * sizeof(char*));*/
	/*	char *tokens[1024];*/
	int numTokens = 0;
	char *token;

	token = strtok(line, delimiters);
	if (token == NULL)
		return (NULL);
	while (token != NULL)
	{
		/*tokens[numTokens] = token;*/
		variables.var._token[numTokens] = token;
		numTokens++;
		token = strtok(NULL, delimiters);
	}
	return (variables.var._token);

}
