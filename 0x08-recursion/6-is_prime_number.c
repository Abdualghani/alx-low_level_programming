#include "main.h"
/**
* checker - checks the input number from n to the base
* @n: number is squared and compared against base
* @base: base number to check
* Return: if prime or not
*
*/

int checker(int n, int base)
{
	if (n * n == base)
		return (0);
	if (n * n > base)
		return (1);
	return (checker(n + 1, base));
}

/**
* is_prime_number - to check if n is prime
* @n: int
* Return: 0 or 1
*/

int is_prime_number(int n)
{
	if (n == 1)
		return (1);
	else
		return (checker(1, n));
}
