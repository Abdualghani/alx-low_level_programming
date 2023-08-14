#include <stdio.h>
/**
  *main - Entry point
  *Description: prints numbers of base 16 in lowercase
  *Return: 0
*/
int main(void)
{
char num;

for (num = 48; num <= 57; num++)
	putchar(num);

for (num = 97; num <= 102; num++)
	putchar(num);

putchar("\n");
return (0);
}
