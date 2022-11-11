#include "main.h"

/**
 * malloc_checked - A memory is allocated using malloc
 * @b: size
 *
 * Return: points to the memory allocated
 */
void *malloc_checked(unsigned int b)
{
	int *s;

	s = malloc(b);
	if (s == NULL)
	{
		exit(98);
	}
	return (s);
}
