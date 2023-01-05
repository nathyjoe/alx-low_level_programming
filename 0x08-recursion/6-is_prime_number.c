#include "main.h"

/**
 * is_prime_number - detrmine if a number is prime
 * @n: number to be tested.
 * Return: return 1 if the input integer is a prime number
 * Otherwise return 0 if number is not a prime number.
 */
int is_prime_number(int n)
{
	int _is_prime = 0;

	if (n < 2)
		_is_prime = 0;
	else if (n == 2)
		_is_prime = 1;
	else if (n % 2 == 1)
		_is_prime = 1;

	return (_is_prime);
}
