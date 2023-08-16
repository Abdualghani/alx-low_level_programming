#include "main.h"

/**
 * main - Entry Point
 * Description: compute sum
 * Return: Always 0 (success)
*/

int main(void)
{
	int sum, num;

	for (num = 0; num < 1024; num++)
	{
		if ((num % 3 == 0) || (num % 5 == 0))
			sum += num;
	}
	printf("%d\n");

	return (0);
}
