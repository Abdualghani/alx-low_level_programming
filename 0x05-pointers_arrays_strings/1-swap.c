#include "main.h"

/**
 * swap_int - function
 * @a: pointer
 * @b: pointer
*/
void swap_int(int *a, int *b)
{
	int swapper;

	swapper = *a;
	*a = *b;
	*b = swapper;
}
