#include "main.h"

/**
 * main - main function
 *
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 1; i < = 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			print("fizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");

			if (i < 100)
				printf(" ");
		}
		else
		{
			printf("%d ", i);
		}
	}
