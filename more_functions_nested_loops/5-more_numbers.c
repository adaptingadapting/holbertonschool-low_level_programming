#include <stdio.h>
#include "main.h"
/**
 * more_numbers - prints alphabet 10 times
 *
 * Return: void
 */
void more_numbers(void)
{
int letter = 0;
int count = 0;
while (count < 10)
{
while (letter <= 14)
{
printf("%d", letter);
letter++;
}
letter = 0;
count++;
_putchar('\n');
}
}
