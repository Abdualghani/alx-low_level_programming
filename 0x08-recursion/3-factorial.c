#include "main.h"

/**
 * factorial - function
 * @n: int
 * Return: Factorial
*/

int factorial(int n)
{
	int fact = 0;

	if (n < 0)
		return (-1);
	else if (n == 0)
		fact = 1;
	else
	{
		fact = n * factorial(n - 1);
	}
	return (fact);
}
