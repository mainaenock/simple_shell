#include "shell.h"

/**
 * main - entry point
 *
 * Return: always 0
 */

int main(void)
{
	char *str = "#cisfun$ ";
	char *line;
	char **arr;

	while (1)
	{
	line = prompt(str);
	arr = str_tok(line);
	fork_fn(arr);

	}

	return (0);
}
