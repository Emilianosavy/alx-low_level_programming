#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of diagonals of a square
 * @a: the matrix
 * @size: size
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, s1, s2, len;

	s1 = 0;
	s2 = 0;
	len = size * size;

	for (i = 0; i < len; i++)
	{
		if (i % (size + 1) == 0)
		{
			s1 += a[i];
		}
		if (i != 0 && i % (size - 1) == 0 && i < (len) - size + 1)
		{
			s2 += a[i];
		}
	}

	printf("%d, %d\n", s1, s2);
}
