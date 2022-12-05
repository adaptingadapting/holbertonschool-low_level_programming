#include<sys/wait.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "main.h"

/**
 * main - Simple shell program
 * Return: Characters
 */

int main(void)
{
	int i = 0;
	char delim[] = {" \n:\t"};
	char *token[80];
	char *userInput = NULL;
	size_t buffsize;
	char *statReturn;
	size_t characters = 0;
	pid_t parent = getpid();
	pid_t pid;
	int status;

	userInput = (char *)malloc(buffsize * sizeof(char));
	if (!userInput)
		exit(1);

loop:
	for (;;)
	{
		printf("$ ");
		characters = getline(&userInput, &buffsize, stdin);
		token[0] = strtok(userInput, delim);
		if (!token[0])
			goto loop;
		if (!strcmp(token[0], "exit"))
		{
			free(userInput);
			exit(0);
		}
		i = 0;
		while (token[i])
		{
			i++;
			token[i] = strtok(NULL, delim);
		}
		if (programStat(token[0]))
		{
			statReturn = programStat(token[0]);
			printf("%s executed\n", statReturn);
			token[0] = statReturn;
		}
		executePathProgram(token);
		}
	return (0);
}
