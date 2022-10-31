#include "main.h"

/**
 * *memset - fills memory with constant byte
 * @s: memory area
 * @b: constant byte
 * @n: bytes filled
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;


	i = 0;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
