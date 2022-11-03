#include "main.h"

/**
 * wildcmp -compares two strings with wildcard *
 * @s1: a pointer to the first string
 * @s2: a pointer to the second string
 *
 * Return: 1 if strings are identical and 0 if they are not identical
 */
int wildcmp(char *s1, char *s2)
{
	if (s1[0] == '\0' && s2[0] == '*' && s2[1] != '\0')
		return (0);

	if (s1[0] == '\0' && s2[0] == '\0')
		return (1);

	if (s1[0] == s2[0])
		return (wildcmp(&s1[1], &s2[1]));

	if (s2[0] == '*')
		return (wildcmp(&s1[0], &s2[1]) || wildcmp(&s1[1], &s2[0]));

	return (0);
}
