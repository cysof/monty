#include <string.h>

/**
 * clean_line - Clean the instruction content by removing unnecessary characters.
 * @content: The instruction content to clean.
 *
 * Return: A pointer to the cleaned content.
 */
char *clean_line(char *content)
{
	size_t end = strlen(content);
	size_t length = strlen(content);

	/* Remove trailing newline character, if present */
	if (length > 0 && content[length - 1] == '\n')
	{
		content[length - 1] = '\0';
	}

	/* Remove leading whitespace */
	while (*content && (*content == ' ' || *content == '\t'))
	{
		content++;
	}

	/* Remove trailing whitespace */
	while (end > 0 && (content[end - 1] == ' ' || content[end - 1] == '\t'))
	{
		end--;
	}
	content[end] = '\0';

	return content;
}

