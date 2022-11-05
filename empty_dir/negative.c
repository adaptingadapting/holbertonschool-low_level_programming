#include <stdio.h>
int FromDeci(unsigned long n, int base)
{
  long decimalnum, quotient, remainder;
  int i, j = 0;
  char hexadecimalnum[100];
  int lenght = 0;
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
    {
      putchar(hexadecimalnum[i]);
      lenght++;
    }
  return lenght;
}
	    
void main(void)
{
  int len1 = FromDeci(100, 10);
  putchar(10);
  printf("%d\n", len1);
}
