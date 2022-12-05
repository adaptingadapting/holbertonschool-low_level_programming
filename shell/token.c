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
	char *cp = malloc(200);
	char *cp2 = malloc(200);
	char *duptoken = malloc(300);
	struct stat st;
	if (!cp)
	{
		if (cp2)
			free(cp2);
		if (duptoken)
			free(duptoken);
		return NULL;
	}
	if (!cp2)
	{
		if (cp)
			free(cp);
		if (duptoken)
			free(duptoken);
		return NULL;
	}
	if (!duptoken)
	{
		if (cp)
			free(cp);
		if (cp2)
			free(cp2);
		return NULL;
	}
	strcpy(cp, i);
	strcpy(cp2, line);
	token = strtok(cp, ":");
	while (token)
	{
		strcpy(duptoken, token);
		strcat(duptoken, "/");
		strcat(duptoken, cp2);
		if (stat(duptoken, &st) == 0)
		{
			free(cp);
			free(cp2);
			duptoken;
			return (duptoken);
		}
		token = strtok(NULL, ":");
	}
	free(cp);
	free(cp2);
	free(duptoken);
	return (NULL);
}
