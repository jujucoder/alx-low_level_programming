#include "main.h"


/**
 * _strcat - concatenates two strings
 * @dest: destiation string
 * @src: source string
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int len;
	int i;

	/* gets the size of the sdestination string */
	len = 0;

	while ( dest[len] != '\0' )
	{
		len++;
	}

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len + i] = src[i];
	}
	dest[len + i] = '\0';

	return (dest);
}



