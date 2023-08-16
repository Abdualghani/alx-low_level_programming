#include "main.h"

/**
 * _isalpha - function
 * @c: inpt
 * Description: ak
 * Return: o or 1
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
