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
int second = 0;
while (first < 10 && second < 10 && (first + second < 19))
{
if (second == 9)
{
first = first + 1;
second = first;
continue;
}
second++;
printf("%d", first);
printf("%d", second);
if (first + second < 17)
{
printf(",");
printf(" ");
}
}
putchar(10);
return (0);
}
