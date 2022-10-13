#include "main.h"
#include <stdio.h>

/**
 *_strstr - finds a substring
 *@haystack: string to be searched
 *@needle: string to search
 *Return: pointer to string start
 */

char *_strstr(char *haystack, char *needle)
{
int i;
int k = 0;
int l = 0;
for (i = 0; haystack[i]; i++)
{
if (haystack[i] == needle[0])
{
while (haystack[i + k] == needle[k])
{
k++;
l++;
}
if (l == _strlen(needle) + 1)
break;
if (l < 3)
return (NULL);
}
}
return (haystack + i);
}

/**
 *_strlen - prints
 *@s: string
 *Return: int
 */
int _strlen(char *s)
{
int i;
for (i = 0; s[i]; i++)
{
}
return (i);
}
