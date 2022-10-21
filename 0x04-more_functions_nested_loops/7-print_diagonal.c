#include "main.h"

/**
 * print_diagonal - prints diagonally
 * @n: prints
 * Return: 0
 */

void print_diagonal(int n)
{

	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
				putchar(' ');

			putchar(92);
			putchar('\n');
		}
	}
	else
	{
		putchar('\n');
	}

