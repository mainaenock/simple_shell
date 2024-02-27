#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Return: always 0
 */

int main(void)
{
	char *line = NULL;
	size_t len = 0;
	ssize_t read;

	printf("$ ");

	read = getline(&line, &len, stdin);
	if (read != -1)
	{
		printf("%s",line);
	}
	else
	{
		printf("error");
	}
	free(line);
	return (0);
}
