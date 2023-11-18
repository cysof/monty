#include "monty.h"
void *loadlinedatatolist(int ln, char *MONTY_FILE);

/**
 * loadlinedatatolist - load data from lines the second time
 * @ln: line
 * @MONTY_FILE: file
 * Return: "tokens"
 */
void *loadlinedatatolist(int ln, char *MONTY_FILE)
{
	char buffer[50000];
	ssize_t bytesRead;
	char line[50000];
	int i, fileDescriptor, lineLength = 0;
	char **token;
	int j = 0;
	/*void (*f)(stack1_t **head, unsigned int line_number);*/
	/*stack1_t *head = NULL;*/

	/*    fileDescriptor = open(ALIAS_FILE, O_RDONLY);*/

	fileDescriptor = open(MONTY_FILE, O_RDONLY);
	if (fileDescriptor == -1)
	{
		fprintf(stderr, "Error: Can't open file %s\n", variables.filename);
		close(fileDescriptor);
		exit(EXIT_FAILURE);
		return (NULL);
	}

	j = 0;
while ((bytesRead = read(fileDescriptor, buffer, 50000)) > 0)
{
for (i = 0; i < bytesRead; i++)
{
if (buffer[i] == '\n')
{
line[lineLength] = '\0';
j++;
token = (char **)tokenize((char *)line);
if (token != NULL)
{
	if (validateOPCODE(token) == 0 && validateOPCODEarg(token) == 0)
	{
		if (ln == j)
		{
			close(fileDescriptor);
			return (token);
		}
		else
		{
			/*error */
		}
	}
}
/*_puts("\n");*/
lineLength = 0;
}
else
{
	line[lineLength] = buffer[i];
	lineLength++;
}
}
}
close(fileDescriptor);
return (NULL);
}
