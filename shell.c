#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>

/**
 * main - entry point
 *
 * Return: always 0
 */

int main(void)
{
	size_t len;
	char *line;
	pid_t child;
	char **args;
	int status, i = 0;
	char *tok;

	while (1)
	{
		write(1, "#cisfun$ ", 9);
		getline(&line, &len, stdin);

		tok = strtok(line, "\n");
		args = malloc(sizeof(char *) * 1024);
		while(tok != NULL)
		{
			args[i] = tok;
			tok = strtok(NULL, "\n");
			i++;
		}


		child = fork();
		if (child == -1)
		{
			perror("error");
		}
		if (child == 0)
		{
			if (execve(args[0], args, NULL) == -1)
			{
				perror("./shell");
			}
		}
		else
		{
			wait(&status);
		}
		i = 0;
		free(args);
	}

}
