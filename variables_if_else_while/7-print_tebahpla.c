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
number = 122;
while (number >= 97)
{
putchar(number);
number--;
}
putchar(10);
return (0);
}
