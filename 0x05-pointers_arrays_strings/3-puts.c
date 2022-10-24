#include "main.h"

/**
 * _puts - prints a string, followed by a \n
 * @str: string
 * Return: void
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_puchar(str[i]);
	}
	_putchar('\n');
}
