#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>

char *prompt(char *str);
char **str_tok(char *line);
void fork_fn(char **arr);


#endif
