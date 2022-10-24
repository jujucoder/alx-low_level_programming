#include "main.h"

/**
 * _strlen - returns length of a str
 * @s: string
 * Return: int
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; ++i);
	return (i);
}
