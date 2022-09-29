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
number = 0;
while (number <= 9)
{
printf("%d", number);
number++;
}
putchar(10);
return (0);
}
