#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

/**
 * main - entry point
 *
 * Return: always 0
 */

int main(void)
{
	pid_t child;
	char *args[] = {"ls", "-l", "/tmp", NULL};
	int status,i;

	for (i = 1; i <= 5; i++)
	{
		child = fork();
		if (child == -1)
		{
			perror("error");
			return (1);
		}
		if (child == 0)
		{
			execve("/usr/bin/ls", args, NULL);
		}
		else
		{
		wait(&status);
		}
	}
	
	return (0);

}
