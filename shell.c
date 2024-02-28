#include "shell.h"

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
