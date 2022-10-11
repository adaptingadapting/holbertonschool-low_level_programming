#include "main.h"
#include <stdio.h>

/**
 *puts_half - prints half the string
 *@str: the string to be printed
 */

void puts_half(char *str)
{
int i;
for (i = 0; i < _strlen(str); i++)
{
if ((_strlen(str) % 2) == 0)
{
if (i > _strlen(str) / 2)
{
putchar(str[i]);
}
else
{
if (i > (_strlen(str) - 1) / 2)
putchar(str[i]);
}
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
