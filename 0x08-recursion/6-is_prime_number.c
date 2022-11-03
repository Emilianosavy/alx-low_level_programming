#include "main.h"

int check_prime(int n, int i);

/**
 * is_prime_number - checks for a  prime number
 * @n: the number to check
 *
 * Return: 1 if the number is prime and 0 if it is not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (check_prime(n, 2));
}

/**
 * check_prime - checks for a prime number
 * @n: the number to check
 * @i: start
 *
 * Return: 1 if number is prime and 0 if not
 */
int check_prime(int n, int i)
{
	if (i > n / 2)
		return (1);
	else if (n % i == 0)
		return (0);
	else
		return (check_prime(n, i + 1));
}
