#include "main.h"

/**
 * _islower - prints lower
 * @c: input
 * Description: Shows if the char enterd is lower
 * Return: 1  if successful and 0 if not
*/


int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
