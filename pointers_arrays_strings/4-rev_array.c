#include "main.h"
#include <stdio.h>

/**
 *reverse_array - function reverses input string
 *@a: input number array
 *@n: number of elements in the array
 */

void reverse_array(int *a, int n)
{
int i;
int temp;
for (i = 0; i < n / 2; i++)
{
temp = a[i];
a[i] = a[n - i - 1];
a[n - i - 1] = temp;
}
}

/**
 *_strlen - finds the lenght of a string
 *@s: the string in question
 *Return: returns the lenght as an integer
 */
int _strlen(char *s)
{
int ctr = 0;

while (*(s + ctr))
ctr++;
return (ctr);
}
