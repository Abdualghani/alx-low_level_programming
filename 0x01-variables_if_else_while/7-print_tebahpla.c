#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry Point
 * Description: Printing the alphabet in reverse
 * Return:  Always 0 (success)
*/

int main(void)
{
char x;

for (x = 122; x >= 97; x--)
	putchar(x);
putchar('\n');
return (0);
}
