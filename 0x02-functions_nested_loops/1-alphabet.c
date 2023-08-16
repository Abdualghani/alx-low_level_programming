#include "main.h"

/**
 * print_alphabet - entry point
 * Description: prints the alphabet
 * Return: 1 when successful, -1 when error
*/

void print_alphabet(void)
{
	int ch;

	for (ch = '0'; ch <= 'z'; ch++)
		_puthar(ch);
	_putchar('\n');
}
