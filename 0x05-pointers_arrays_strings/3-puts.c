#include "main.h"

/**
 *_puts-prints a string to stdout
 * @str:pointer to the string to print
 */

void _putchar(char *str)
{
	int i;
	int _putchar;

	for (i = 0; str[i] != '\0'; i++)
	{
 		_putchar(str[i]);
	}
		_putchar('\n');
}
