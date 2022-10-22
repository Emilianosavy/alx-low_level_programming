#include <stdio.h>

/**
 * main - checks prime factors of numbers
 * prints the largest;
 *
 * Return: 0 
 */

int main(void)
{
	long int num, a;

	num = 612852475143;

	for (a = 2; a <= num; a++)
	{
		if (num % a == 0)
		{

			num = num / a;

			a--;
		}

	}

	printf("%1d\n", a);

	return (0);
}
