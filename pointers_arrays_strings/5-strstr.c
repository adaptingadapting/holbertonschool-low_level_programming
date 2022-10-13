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
if (needle[0] == '\0')
return (haystack);
for (i = 0; haystack[i]; i++)
{
if (haystack[i] == needle[0])
{
while (haystack[i + k] == needle[k])
{
k++;
l++;
}
if (l == _strlen(needle))
break;
}
}
if (l == _strlen(needle))
return (haystack + i);
return (NULL);
}

/**
 *_strlen - prints
 *@s: string
 *Return: int
 */
int _strlen(char *s)
{
int i;
while (*(s + i))
i++;
return (i);
}
