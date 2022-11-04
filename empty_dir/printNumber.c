#include "main.h"

void FromDeci(long n, int base) 
{
  long decimalnum, quotient, remainder;
  int i, j = 0;
  char hexadecimalnum[100];
  decimalnum = n;
  quotient = decimalnum;
  while (quotient != 0)
    {
      remainder = quotient % base;
      if (remainder < 10)
	hexadecimalnum[j++] = 48 + remainder;
      else
	hexadecimalnum[j++] = 55 + remainder;
      quotient = quotient / base;
    }
  
  for (i = j; i >= 0; i--)
    putchar(hexadecimalnum[i]);
}
void main(void)
{
  long int a = 12200;
  int base = 16;
  FromDeci(a, base);
}
