#include "main.h"
#include <stdio.h>
/**
 * print_square - print the 9 times table starting on 0
 * @n : number
 * Return: 0 on success
 */

void print_square(int n)
{
int x = 0;
int y = 0;

if (n <= 0)
{
putchar(10);
return;
}
else
{
for (y = 0; y < n; y++)
{
for (x = 0; x < n; x++)
{
printf("#");
}
printf("\n");
}
}
}
