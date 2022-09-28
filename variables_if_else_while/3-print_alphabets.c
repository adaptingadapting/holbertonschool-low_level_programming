#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints string
 * Return: return the printed string and end the function
 */
int main(void)
{
int upper;
int lowercase;
lowercase = 97;
upper = 65;
while (lowercase <= 122)
{
putchar(lowercase);
lowercase++;
}
while (upper <= 90)
{
putchar(upper);
upper++;
}
putchar(10);
return (0);
}
