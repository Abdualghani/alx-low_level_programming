#include "main.h"

void print_numbers(void)
{
	int x = 0;

	do {
		_putchar(x + 48);
		x++;
	} while (num >= 0 && num <= 9);
	_putchar('\n');
}
