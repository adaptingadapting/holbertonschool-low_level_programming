#include "main.h"
#include <stdio.h>

/**
 *print_array - prints n number of numbers in a array
 *@a: array to be cut
 *@n: number of elements in a to print
 */

void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if ((i + 1) == n)
{
}
else
printf(", ");
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
