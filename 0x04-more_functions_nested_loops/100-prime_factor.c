#include <stdio.h>

/**
 * main - entry point
 * largest_prime_factor - determines largest prime factor
 * @num: holds largest number
 * Return: long long integer
 */

long long largest_prime_factor(long long num)
{
	long long factor = 2;

	while (factor * factor <= num)
	{
		if (num % factor == 0)
	{
		num /= factor;
	}
	else
	{
		factor++;
	}
	}
	return (num);
}

int main(void)
{
	long long num = 612852475143;
	long long largest_factor = largest_prime_factor(num);

	printf("%lld\n", largest_factor);
	return (0);
}
