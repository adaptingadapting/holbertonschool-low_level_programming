#include "main.h"

/**
 * programStat - Checks for the existence of program
 * @line: starting string
 * Return: Return string
 */

char *programStat(char *line)
{
	char *token, *duptoken;
	char *i = getenv("PATH"), *cp = strdup(i);
	char *cp2 = strdup(line);
	struct stat st;

	token = strtok(cp, ":");
	while (token)
	{
		duptoken = strdup(token);
		strcat(duptoken, "/");
		strcat(duptoken, cp2);
		if (stat(duptoken, &st) == 0)
			return (duptoken);
		token = strtok(NULL, ":");
	}
	return (NULL);
}
