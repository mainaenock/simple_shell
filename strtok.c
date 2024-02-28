#include "shell.h"

/**
 * main - entry point
 *
 * Return: always 0
 */

char **str_tok(char *line)
{
	char *tok;
	char *delimiter = "\n";
	int i = 0;
	char **arr;
	size_t len;

	len = strlen(line);

	arr = malloc(len);
	if (arr == NULL)
	{
		perror("error");
		exit(EXIT_FAILURE);
	}

	tok = strtok(line, delimiter);

	while (tok != NULL)
	{
		arr[i] = tok;
		tok = strtok(NULL, delimiter);
		i++;
	}
	arr[i] = NULL;
	return (arr);
}
