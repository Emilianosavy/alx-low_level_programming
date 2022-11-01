#include "main.h"
#include <string.h>

/**
 * _memcpy - copies bytes from src to memory
 * @dest: src to copy to
 * @src: copy from
 * @n: bytes to copy
 *
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *res = memcpy(dest, src, n);

	return (res);
}
