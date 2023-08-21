#include "main.h"

/**
 * _strlen - function
 * @s: pointer
 * Return: length
*/

int _strlen(char *s)
{
	int len;

	for (len = 0; *s != '\0'; s++)
		len++;
	return (len);
}
