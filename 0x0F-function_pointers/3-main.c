#include "3-calc.h"

/**
 * main - check the code for Holberton School students.
 * @argc: number of arguments.
 * @argv: array.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int a, b;
	int (*opr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	opr = get_op_func(argv[2]);

	if (opr == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	printf("%d\n", opr(a, b));
	return (0);
}
