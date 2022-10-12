#include "main.h"
#include <stdio.h>

/**
 *_strncpy - function that copies a string into a buffer
 *@dest: buffer to copy into
 *@src: source to copy from
 *@n: amount of bytes to copy to dest
 *Return: returns the string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < _strlen(src) && i < n; i++)
{
dest[i] = src[i];
}
for (; i < n; i++)
dest[i] = '\0';
return (dest);
}
/**
 *_strlen - function that returns an int that matches the lenght of the string
 * @s: the string in question
 *Return: returns the lenght of the string (measured in i)
 */

int _strlen(char *s)
{
int i = 0;

while (*(s + i))
i++;
return (i);
}
