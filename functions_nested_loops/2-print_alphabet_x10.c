#include "main.h"
#include <stdio.h>
int main(void)
{
void print_alphabet(void)
{
  int letter = 97;
  int count = 0;
  while (count <= 10)
    {
      while (letter <= 122)
	{
	  putchar(letter);
	  letter++;
	}
      letter = 97;  
      count++;
      putchar(10);
    }
}
 print_alphabet();
    

}
