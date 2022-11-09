#include "main.h"

/**
 * alloc - allocates space in memory for an array
 * @str: string
 * @len: length
 * @size: size
 *
 * Return: array or null
 */
char **alloc(char *str, int len, int size)
{
	int i, j, size2;
	char **a, prev;

	a = malloc((size + 1) * sizeof(char *));
	prev = ' ';

	for (i = 0; i < size; i++)
	{
		while (j < len)
		{
			if (str[j] == ' ' && prev != ' ')
			{
				prev = ' ';
				j++;
				break;
			}
			if (str[j] != ' ')
				size2++;
			prev = str[j];
			j++;
		}

		a[i] = malloc((size2 + 1) * sizeof(char));
		if (a[i] == NULL)
		{
			return (NULL);
		}
		size2 = 0;
	}
	a[size] = NULL;

	return (a);
}

/**
 * strtow - splits a string
 * @str: string
 *
 * Return: strings or NULL
 */
char **strtow(char *str)
{
	char **a, prev = ' ';
	int i, j = 0, k = 0, c = 0, len, size = 0;

	if (str == NULL || strlen(str) == 0)
		return (NULL);
	len = strlen(str);
	for (i = 0; i < len; i++)
	{
		if (str[i] != ' ')
			c = 1;
		if (str[i] != ' ' && prev == ' ')
			size++;
		prev = str[i];
	}
	a = alloc(str, len, size);
	if (a == NULL || c == 0)
		return (NULL);
	prev = ' ';
	for (i = 0; i < size; i++)
	{
		while (j < len)
		{
			if (str[j] == ' ' && prev != ' ')
			{
				prev = ' ';
				j++;
				break;
			}
			if (str[j] != ' ')
			{
				a[i][k] = str[j];
				k++;
			}
			prev = str[j];
			j++;
		}
		a[i][k] = '\0';
		k = 0;
	}
	return (a);
}
