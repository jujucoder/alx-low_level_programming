#include "main.h"
/**
 * *_strncpy - copies a string
 * @dest: stores the string copy
 * @src: source string
 * @n: max number of bytes to be copied from src
 * Return: resulting string dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
