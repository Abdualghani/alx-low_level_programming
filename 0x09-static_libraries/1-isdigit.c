#include "main.h"
/**
 * _isdigit - function
 * @c: int
 * Return: 1 if success,0 when fail
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
