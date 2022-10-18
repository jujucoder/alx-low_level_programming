#include "main.h"

/**
 * print_sign - entry point
 *
 * @n: value to be checked
 *
 * Description: Program to print sign of a number
 *
 * Return: 1 if positive 0 if zero -1 if negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('48');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
