#include "main.h"
#include <stdio.h>

/**
 *_strchr - finds a character in the s string, returns null if not
 *@s: string to be searched
 *@c: character to be found
 *Return: returns the pointer to the position
 */

char *_strchr(char *s, char c)
{
int i;
for (i = 0; s[i]; i++)
{
if (s[i] == c)
return (s + i);
}
return (NULL);
}
