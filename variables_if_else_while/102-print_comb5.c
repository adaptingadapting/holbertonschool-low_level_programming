#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints string
 * Return: return the printed string and end the function
 */

int main(void)
{
int number;
int second;
number = 0;
second = 0;
while (number < 100)
{
second = number;
while (second < 100)
{
if (number < second)
{
putchar(number / 10 + '0');
putchar(number % 10 + '0');
putchar(' ');
putchar(second / 10 + '0');
putchar(second % 10 + '0');
if (number != 98)
{
putchar(',');
putchar(' ');
}
}
second++;
}
number++;
}
putchar(10);
return (0);
}
