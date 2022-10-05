#include "main.h"
/**
 * print_most_numbers - prints alphabet in lowercase
 *
 * Return: void
 */
void print_most_numbers(void)
{
int number = 48;
while (number <= 57)
{
if (number == 59 || number == 61)
{
continue;
}
else
{
_putchar(number);
number++;
}
}
_putchar('\n');
}
