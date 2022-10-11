#include "main.h"
#include <stdio.h>

/**
 *puts2 - prints every other character in a string
 *@str: string thats going to be cut
 */

void puts2(char *str)
{
int i;
for (i = 0; i < _strlen(str); i++)
{
if (i % 2 == 0)
{
putchar(str[i]);
continue;
}
}
putchar(10);
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
