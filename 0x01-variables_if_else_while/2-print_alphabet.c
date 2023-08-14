#include <stdio.h>

/**
 * main - Entry Point
 * Description : Printing The Alphabet
 * Return : Always 0 (success)
*/

int main(void)
{
	char alphabet;
	for (alphabet = 'a' ; alphabet <= 'z' ; alphabet++)
		putchar(alphabet);
	putchar('\n');
	return (0);
}

