#include "main.h"
#include <stdio.h>

/**
 *_strcpy - function that copies a string into a buffer
 *@dest: buffer to copy into
 *@src: source to copy from
 *Return: returns the string dest
 */

char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; i < _strlen(src); i++)
{
if (!(src[i]))
{
}
dest[i] = src[i];
}
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
