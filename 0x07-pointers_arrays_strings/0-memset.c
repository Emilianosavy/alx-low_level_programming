#include <string.h>
#include "main.h"

/**
 * _memset - fills a memory
 * @s: s
 * @b: byte
 * @n: number of bytes
 *
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *res = memset(s, b, n);

	return (res);
}
