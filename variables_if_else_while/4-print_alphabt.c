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
number = 97;
while (number <= 122)
{
if (number == 101 || number == 113)
{
number++;
continue;
}
putchar(number);
number++;
}
putchar(10);
return (0);
}
