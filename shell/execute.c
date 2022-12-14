
#include "main.h"

/**
 * executePathProgram - executes a program
 * @token: an array of pointers to strings
 */

void executePathProgram(char **token)
{
	int status;
	pid_t pid;

	pid = fork();
	if (pid == -1)
		perror("failed to fork");
	else if (pid > 0)
		wait(&status);
	else
	{
		if (execve(token[0], token, NULL) == -1)
			printf("$ %s is not a recognized command\n", token[0]);
		exit(1);
	}
}
