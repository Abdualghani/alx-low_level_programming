#include "main.h"

/**
 * print_most_numbers - fun
 * Description: a
 * Return: none
*/

void print_most_numbers(void);
{
	int x = 0;

	do {
		if (x != 2 && x != 4)
			_putchar(x + 48);
		x++;
	} while (x >= 0 && x <= 9);
	_putchar('\n');
}
