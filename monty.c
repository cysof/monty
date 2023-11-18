#include "monty.h"
/**
 * exitHandler - handle event after exit is called
 * Return : NULL
 * Description: free space on exit
 */
void exitHandler(void)
{
	if (variables.head2 != NULL)
		free_stack(variables.head2);
	if (close(variables.fileDescriptor) == -1)
		return;
}
/**
 * checkFileExtension - check extension
 * @filename: file
 * @extension: extension
 * Return: null
 */
int checkFileExtension(const char *filename, const char *extension)
{
	const char *dot = strrchr(filename, '.');

	if (dot != NULL)
	{
		if (strcmp(dot, extension) == 0)
			return (0);
		else
			return (-1);
	}
	else
		return (-1);
}
/**
 * checkfile - ========
 * @filename: ========
 * Return: =====
 */
void checkfile(char *filename)
{
	int fileDescriptor;

	fileDescriptor = open(filename, O_RDONLY);
	if (fileDescriptor == -1)
	{
		fprintf(stderr, "Error: Can't open file %s\n", filename);
		close(fileDescriptor);
		exit(EXIT_FAILURE);
	}
	close(fileDescriptor);
}


/**
 * main - entry point
 * @argc: arg count
 * @argv: argv
 * Return: 0
 */
int main(int argc, char **argv)
{

	variables.head2 = NULL;
	variables.err_no = 0;
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	checkfile(argv[1]);
	variables.mode = "stack";
	variables.filename = argv[1];
	atexit(exitHandler);
	loadlinedata(0, variables.filename);
	free_stack(variables.head2);

	return (0);
}
