#include "main.h"
#include <string.h>

/**
 * _strspn - gets the length of a substring
 * @s: the string
 * @accept: the substring
 *
 * Return: number of bytes in initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int res = strspn(s, accept);

	return (res);
}
