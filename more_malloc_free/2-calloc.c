#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * _calloc - allocates memory for arra
 * @nmemb: elements in array
 * @size: size
 * Return: something
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
int k;
void *p;

if (nmemb == 0 || size == 0)
return (NULL);

k = nmemb * size;
p = malloc(k);
if (p == NULL)
return (NULL);

memset(p, 0, k);
return (p);
}
