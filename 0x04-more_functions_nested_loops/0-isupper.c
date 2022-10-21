#include <ctype.h>
#include "main.h"

/**
 * _isupper - Checks for upper case letters
 * @c: what to check
 * Return: 1 if true, 0 if false
 */
int _isupper(int c)
{
	int result = isupper(c);

	if (result == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

