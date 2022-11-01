#include "main.h"
#include <string.h>

/**
 * _strchr - locates a character in a string
 * @s: the string
 * @c: character to be located
 *
 * Return: a pointer to the first occurence or NULL if not found
 */
char *_strchr(char *s, char c)
{
	char *res = strchr(s, c);

	return (res);
}
