#include "main.h"

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
