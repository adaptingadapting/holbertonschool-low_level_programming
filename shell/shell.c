#include<sys/wait.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main()
{
	int i = 0;
	char delim[] = {" \n:\t"};
	char *token[80];
	char *user_input = NULL;
	size_t buffsize;
	size_t characters = 0;
	int size;
	pid_t parent = getpid();
	pid_t pid;
	int status;
	
	user_input = (char *)malloc(buffsize * sizeof(char));
	if (!user_input)
		exit(1);
loop:
	for (;;)
	{
		printf("$ ");
		characters = getline(&user_input, &buffsize, stdin);
		token[0] = strtok(user_input, delim);
		if (!token[0])
			goto loop;
		if (!strcmp(token[0], "exit"))
		{
			free(user_input);
			exit(0);
		}
		for (i = 1; token[i]; i++)
			token[i] = strtok(NULL, delim);
		pid = fork();
		if (pid == -1)
			perror("failed to fork");
		else if (pid > 0)
			wait(&status);
		else 
		{
			if (execve(token[0],token,NULL) == -1)
				printf("$ %s is not a recognized command\n", token[0]);
			exit(1);
		}
	}
	return (0);
}
