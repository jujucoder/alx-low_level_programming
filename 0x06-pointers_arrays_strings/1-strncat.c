#include "main.h"
#include <string.h>

/**
 * *_srtncat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: number of bytes
 * Return: pointer to dest
 */

char *strncat(char *dest, char *src, int n)
{
	int len;
	int i;

	len = strlen(dest);

	for (i = 0; src[i] != '\0' && n != i ; i++)
	{
		dest[len + i] = src[i];
	}

	return (dest);
}
		
