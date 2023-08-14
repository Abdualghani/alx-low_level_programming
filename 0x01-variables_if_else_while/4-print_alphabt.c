#include <stdio.h>

/**
 * main - Entry Point
 * Description: Printing the alphabet without e and q
 * Return: Always 0 (success)
*/

int main(void)
{
char alphabet;

for (alphabet = 'a'; alphabet <= 'z' ; alphabet++)
{
	if (alphabet == 'e' || alphabet == 'q')
	{
		alphabet++;
	}
	putchar(alphabet);
}
putchar('\n');
return (0);
}
