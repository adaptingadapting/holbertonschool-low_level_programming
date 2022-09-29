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
number = 48;
while (number <= 102)
{
if (number > 57 && number < 97)
{
number = 97;
continue;
}
putchar(number);
number++;
}
putchar(10);
return (0);
}
