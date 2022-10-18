#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Description: Program that prints alphabet
 * followed by a new line
 *
 * Return:Void
 */

void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
	}
	_putchar('\n');

}
