#include "main.h"
#include <string.h>

/**
 * _puts_recursion - prints a string accompanied by a new line
 * @s: points to a string
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	int len;

	len = strlen(s);

	if (len == 0)
	{
		_putchar('\n');
		return;
	}

	_putchar(s[0]);
	_puts_recursion(&s[1]);
}
