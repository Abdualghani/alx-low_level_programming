#include "main.h"

/**
 * _puts_recursion - function
 * @s: intger
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_put_recursion(s + 1);
	}
}
