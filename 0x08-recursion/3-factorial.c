#include "main.h"

/**
 * factorial - returns factorial of a number
 * @n: number
 * Return: -1(error) , factorial (success)
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n > 0)
		return (n * factorial(n-1));
	if (n == 0)
		return (1);
}
