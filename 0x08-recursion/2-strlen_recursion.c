#include "main.h"

/**
 * _strlen_recursion - print strlen with recursion
 * @s: string
 * Return: 0(error) strlen(success)
 */

int _strlen_recursion(char *s)
{

	if (*s == 0)
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
