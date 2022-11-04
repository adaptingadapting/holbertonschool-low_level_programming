#include "main.h"

void print(long long int n)
{
  if (n < 0)
    {
      putchar('-');
      n = -n;
    }
  if (n / 10)
    print(n / 10);
  putchar(n % 10 + '0');
}
