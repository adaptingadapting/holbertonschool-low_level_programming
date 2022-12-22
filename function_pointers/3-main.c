#include "3-calc.h"

/**
 * main - main fucntion
 * @argc: argument count
 * @argv: argument vector
 * Return: int
 */

int main(int argc, char *argv[])
{
	int (*f)(int a, int b);
	int i;
	int j;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	i = atoi(argv[1]);
	j = atoi(argv[3]);
	f = get_op_func(argv[2]);
	if (!f)
	{
		printf("Error\n");
		exit(99);
	}
	i = f(i, j);
	printf("%d\n", i);
	return (0);
}
