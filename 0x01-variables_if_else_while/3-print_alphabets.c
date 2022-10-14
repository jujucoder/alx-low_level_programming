#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 * Return:Always 0(succesfull)
 */

int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
	}
	while (alpha <= 'z')
	{
		putchar(toupper(alpha));
	}

	return (0);
}

