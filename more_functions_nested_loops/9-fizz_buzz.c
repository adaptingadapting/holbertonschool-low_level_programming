#include <stdio.h>
/**
 * main - print the 9 times table starting on 0
 *
 * Return: 0 on success
 */

int main(void)
{
int number = 1;
for (number = 1; number <= 100; number++)
{
if (number % 3 == 0 && number % 5 == 0)
{
printf("FizzBuzz ");
continue;
}
else if (number % 3 == 0)
{
printf("Fizz ");
continue;
}
else if (number % 5 == 0)
{
printf("Buzz");
if (number < 100)
{
printf(" ");
}
continue;
}
printf("%d ", number);
}
printf("\n");
return (0);
}

