#include <ctype.h>
#include "main.h"

/**
 * _isdigit - checks for digit
 * @c: what to check
 * Return: 0
 */

int _isdigit(int c)
{
	int result = isdigit(c);


	if (result == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
