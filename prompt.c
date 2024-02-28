#include "shell.h"

/**
 * main - entry point
 *
 * Return: always 0
 */

char * prompt(char *str)
{
	size_t len = 0;
	char *line = NULL;
	write(1, str, strlen(str));

	if (getline(&line, &len, stdin) == -1)
	{
		perror("error");
		exit(EXIT_FAILURE);
	}
	return (line);

}
