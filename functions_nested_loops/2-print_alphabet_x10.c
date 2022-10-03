#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
* Return: void
 */

void print_alphabet(void)
{
int letter = 97;
int count = 0;
while (count <= 10)
{
while (letter <= 122)
{
_putchar(letter);
letter++;
}
letter = 97;  
count++;
_putchar('\n');
}
}

