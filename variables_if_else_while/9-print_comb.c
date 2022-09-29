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
while (number <= 57)
{
putchar(number);
if (number == 57)
{
number++;
continue;
}
putchar(44);
putchar(32);
number++;
}
putchar(10);
return (0);
}
