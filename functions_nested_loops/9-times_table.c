#include "main.h"
#include <stdio.h>
/**
 * times_table - print the 9 times table starting on 0
 *
 * Return: 0 on success
 */

void times_table(void)
{
int x = 0;
int n = 0;

for (x = 0; x < 10; x++)
{
printf("\n");
for (n = 0; n < 10; n++)
if (n < 9)
{
printf("%d, ", x * n);
}
else
printf("%d", x * n);
}
}
