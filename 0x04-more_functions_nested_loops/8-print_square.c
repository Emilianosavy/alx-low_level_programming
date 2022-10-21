#include "main.h"

/**
 * print_square - prints square
 * @size: shows size
 * Return: 0
 */

void print_square(int size);
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			putchar(35);
		}
		putchar('\n');
	}
	else
	{
		putchar('\n');
	}
}
