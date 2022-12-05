#include "main.h"

/**
 * programStat - Checks for the existence of program
 * @line: starting string
 * Return: Return string
 */

char *programStat(char *line)
{
	char *token;
	char *i = getenv("PATH");
	char *cp = malloc(strlen(i));
	char *cp2 = malloc(strlen(line));
	char *duptoken = malloc(strlen(line) + strlen(i) + 2);
	struct stat st;

	strcpy(cp, i);
	strcpy(cp2, line);
	token = strtok(cp, ":");
	while (token)
	{
		strcpy(duptoken, token);
		strcat(duptoken, "/");
		strcat(duptoken, cp2);
		if (stat(duptoken, &st) == 0)
			return (duptoken);
		token = strtok(NULL, ":");
	}
	return (NULL);
}
