#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Description: Programm that prints alphabet 10 times
 *
 * Return:Void
 *
 */

void print_alphabet_x10(void)
{
	int x = 0;

	while (x <= 10)
	{
		char a = 'a';

		while (a < 'z')
		{
			_putchar(a);
			a++;
		}

		x++;
	}
}
