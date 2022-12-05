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
	int i;
	char delim[] = {" \n:\t"};
	char *token[80];
	char *userInput;
	size_t buffsize;

loop:
	for (;;)
	{
		userInput = (char *)malloc(buffsize * sizeof(char));
		if (!userInput)
			exit(1);
		printf("$ ");
		if (getline(&userInput, &buffsize, stdin) == (-1))
		{
			free(userInput);
			printf("Terminated shell\n");
				return (-1);
		}
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
			token[0] = programStat(token[0]);
		executePathProgram(token);
		free(userInput);
	}
	return (0);
}
