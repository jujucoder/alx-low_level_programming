#include<stdio.h>


/**
 * main - Entry point
 * Return : 0
 */

int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
}
