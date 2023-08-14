#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry Point
 * Description: Printing all single digit numbers using putchar
 * Return: Always 0 (success)
*/

int main(void)
{
int x;
for (x = 48 ; x <= 57; x++)
	putchar(x);

putchar('\n');
return (0);
}
