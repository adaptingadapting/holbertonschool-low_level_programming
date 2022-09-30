#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints string
 * Return: return the printed string and end the function
 */
int main(void)
{
int first = 0;
int second = 1;
int third = 1;
while (first < 10 && second < 10 && third < 10 &&
(first + second + third < 24))
{
if (third == 9)
{
second = second + 1;
if (second == 9)
{
first = first + 1;
second = first;
continue;
}
third = second;
continue;
}
third++;
printf("%d", first);
printf("%d", second);
printf("%d", third);
if (first + second + third < 24)
{
printf(",");
printf(" ");
}
}
putchar (10);
return (0);
}
