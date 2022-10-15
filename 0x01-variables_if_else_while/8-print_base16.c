#include <stdio.h>
/**
 * main - entry point
 * Return:0
 */

int main(void)
{
	int a = 48;
	char b = 'a';

	while (a < 58)
	{
		putchar(a);
		a++;
	}
	while (b <= 'f')
	{
		putchar(b);
		b++;
	}
	putchar('\n');

	return (0);
}
