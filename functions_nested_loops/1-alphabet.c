#include "main.h"
/**
 * print_alphabet - prints alphabet in lowercase
 *
 * Return: void
 */
void print_alphabet(void)
{
int letter = 97;
while (letter <= 122)
{
_putchar(letter);
letter++;
}
_putchar('\n');
}
