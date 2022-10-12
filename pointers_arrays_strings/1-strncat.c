#include "main.h"
#include <stdio.h>

/**
 *_strncat - concatenates two strings, but only n amount of characters
 *@dest: destination string to be changed n amount of times
 *@src: source string to change from
 *@n : amount of string to change from src to dest
 */

char *_strncat(char *dest, char *src, int n)
{
int i;
int j;
for (i = 0; dest[i]; i++)
{
}
for (j = 0; src[j] && j < n; j++)
{
dest[i] = src[j];
i++;
}
return (dest);
}

/**
 *_strlen - returns the lenght of the string 
 *@s: string to be measured
 *Return: returns the lenght of s 
 */

int _strlen(char *s)
{
int i;
while (s[i])
i++;
return (i);
}
