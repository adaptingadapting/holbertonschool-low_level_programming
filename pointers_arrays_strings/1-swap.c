#include "main.h"
/**
 * swap_int - prints word
  *@a: first number to swap
  *@b: second number to swap
   * Return: 0
    */
void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
