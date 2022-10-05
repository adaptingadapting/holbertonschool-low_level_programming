#include "main.h"
#include <stdio.h>
/**
 * print_line - print the 9 times table starting on 0
 *@n: added n
 * Return: 0 on success
 */

void print_line(int n)
{
int x = 0;
for (x = 0; x < n; x++)
if (n <= 0)
{
putchar(10);
return;
}
else
{
printf("_");
}
putchar(10);
}
