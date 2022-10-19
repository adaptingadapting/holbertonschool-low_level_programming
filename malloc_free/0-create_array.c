#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 *create_array - creates an array of characters
 *@size: size of unsigned int
 *@c: character to initialize the array with
 *Return: returns the string
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *s;
if (!(size))
return (NULL);
else
{
s = malloc(size * (sizeof(c)));
if (s == NULL)
return (NULL);
else
{
for (i = 0; i < size; i++)
s[i] = c;
return (s);
}
}
}
