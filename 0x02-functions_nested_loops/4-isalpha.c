#include "main.h"

/**
 * _isalpha - Entry point
 *
 * @c: value to be compared
 *
 * Description: Program that checks for alphabets
 *
 * Return: 1 if c is an alphabet, 0 if it's not
 */

int _isalpha(int c)
{
	if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
