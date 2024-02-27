#include <stdio.h>
#include <unistd.h>

/**
 * main - PPID
 *
 * Return: always 0
 */

int main(void)
{
	pid_t ppid;

	ppid = getppid();
	printf("%u\n", ppid);

	return (0);
}
