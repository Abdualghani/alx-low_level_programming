#include "main.h"

/**
 * more_numbers - fun
 * Description: aa
 * Return: a
*/


void more_numbers(void)
{
	int it;

	for (it = 1; it <= 10; it++)
	{
		int x = 0, y = 0;

		do {
			_putchar(x + 48);
			x++;
		} while (x >= 0 && x <= 9);

		do {
			_putchar(49);
			_putchar(y + 48);
			y++;
		} while (y >= 0 && y <= 4);
		_putchar('\n');
	}
}
