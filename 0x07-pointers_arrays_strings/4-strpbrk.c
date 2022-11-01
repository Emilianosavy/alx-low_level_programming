#include "main.h"
#include <string.h>

/**
 * _strpbrk - searches a string for any set of bytes
 * @s: the string
 * @accept: search string
 *
 * Return: a pointer to the byte in s that matches or NULL if not found
 */
char *_strpbrk(char *s, char *accept)
{
	char *res = strpbrk(s, accept);

	return (res);
}
