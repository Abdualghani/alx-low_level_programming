#include "main.h"

/**
 * print_rev - fun
 * @s : pointer
*/
void print_rev(char *s)
{
	int a = 0;

	while (s[a])
		a++;

	while (a--)
		_putchar(s[a]);

	_putchar('\n');
}
