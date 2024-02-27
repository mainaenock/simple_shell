#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - entry point
 *
 * Return: always 0
 */

int main(void)
{
	char str[] = "My name is Enock";
	char *tok;
	char *delimiter = " ";

	tok = strtok(str, delimiter);

	while (tok != NULL)
	{
		printf("%s\n", tok);
		tok = strtok(NULL, delimiter);
	}
	return (0);
}
