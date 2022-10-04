#include <stdio.h>

void main(void)
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
      printf("Buzz ");
      continue;
    }
       printf("%d ", number);
 }
}

