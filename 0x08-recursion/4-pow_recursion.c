#include "main.h"

/**
 * _pow_recursion - fnction
 * @x: int
 * @y: power
 * Return: x to the power of y*
*/

int _pow_recursion(int x, int y)
{
	int power = 0;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);

	power = x * _pow_recursion(x, y - 1);
	return (power);
}
