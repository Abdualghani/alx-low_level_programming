#include <unistd.h>
#include "main.h"

/**
 * _putchar - prints putchar
 * Return: on scess 1, on error -1 is returned
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
