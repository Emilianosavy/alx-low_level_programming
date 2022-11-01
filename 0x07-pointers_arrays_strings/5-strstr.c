#include "main.h"
#include <string.h>

/**
 * _strstr - finds the first occurence to a substring in a string
 * @haystack: the string
 * @needle: the substring
 *
 * Return: a pointer to the beginning or NULL if substring not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *res = strstr(haystack, needle);

	return (res);
}

