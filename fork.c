#include "shell.h"

/**
 * fork_fn - starts the child process
 * @arr: the command
 *
 * Return: Always 0.
 */
void fork_fn(char **arr)
{
	pid_t child;
	int status;


	child = fork();
	if (child == -1)
	{
		perror("error");
	}
	if (child == 0)
	{
		if (execve(arr[0], arr, NULL) == -1)
		{
			perror("./shell");
		}

	}
	else
	{
		wait(&status);
	}
}
