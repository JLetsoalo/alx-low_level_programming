#include "main.h"

/**
 * is_prime - checks if number is prime
 * @n: number to check
 * @denom: denominator
 * Return: 1 if prime, 0 if not
 */

int is_prime(int n, int denom)
{
	if (n == denom)
		return (1);
	if (n % denom == 0)
		return (0);
	return (is_prime(n, denom + 1));

}

/**
 * is_prime_number - check if the giben number is prime
 * @n: number to check if is prime number
 * Return: 1 when is prime, 0 if not prime number
 */

int is_prime_number(int n)
{
	int denom = 3;

	if (n % 2 == 0 || n < 2)
		return (0);
	if (n == 2)
		return (1);

	return (is_prime(n, denom));
}
