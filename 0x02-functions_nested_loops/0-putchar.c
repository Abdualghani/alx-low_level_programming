#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry Point
 *Description: a program to print _putchar
 *Return: Always 0 (success)
 */

int main(void)
{
	char str[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8 ; ch++)
	{
		_putchar(str[ch]);
	}
	_putchar('\n');
	return (0);
}
