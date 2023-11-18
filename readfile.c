#include "monty.h"

void *loadlinedata(int ln, char *MONTY_FILE);
/**
 * loadlinedata - load lines first
 * @ln: lines
 * @MONTY_FILE: file
 * Description: run each lines one by one
 * Return: NULL
 */
void *loadlinedata(int ln, char *MONTY_FILE)
{
	char buffer[50000];
	ssize_t bytesRead;
	char line[50000];
	int i, fileDescriptor, lineLength = 0;
	unsigned int j = 0;
	char **token;
	void (*f)(stack1_t **head, unsigned int line_number);
	stack1_t *head = NULL;

	/*    fileDescriptor = open(ALIAS_FILE, O_RDONLY);*/

	fileDescriptor = open(MONTY_FILE, O_RDONLY);
	variables.fileDescriptor = fileDescriptor;
	if (fileDescriptor == -1)
	{
		fprintf(stderr, "Error: Can't open file %s\n", variables.filename);
		variables.fileDescriptor = 0;
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
			if (token != NULL && token[0][0] != '#')
			{
			if (validateOPCODE(token) == 0 && validateOPCODEarg(token) == 0)
			{
			if (ln == 0)
			{
			f = select_opcode(token);
			if (f != NULL)
			{
			close(fileDescriptor);
			f(&head, j);
			}
			}
			}
			else
			{
			if (variables.err_no == -1)
				fprintf(stderr, "L%d: usage: push integer\n", j);
			else if (variables.err_no == -2)
				fprintf(stderr, "L%d: unknown instruction %s\n",
						j, variables.var._token[0]);
			variables.err_no = 0;
			variables.fileDescriptor = 0;
			close(fileDescriptor);
			exit(EXIT_FAILURE);
			}
			}
			variables.err_no = 0;
			variables.var._token[0] = NULL;
			variables.var._token[1] = NULL;
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
variables.fileDescriptor = 0;
close(fileDescriptor);
return (NULL);
}
