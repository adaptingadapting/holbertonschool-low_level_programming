#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - print the 9 times table starting on 0
 * @n : number
 * Return: 0 on success
 */

void print_diagonal(int n)
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
for (x = 0; x < n; x++)
{
for (y = 0; y < x; y++)
{
printf(" ");
}
printf("\\");
printf("\n");
}
}
}
