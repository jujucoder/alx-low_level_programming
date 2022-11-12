#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns pointer to a duplicate str
 * @str: string to be duplicated
 * Return: NULL(error),Pointer to duplicate str(sucess)
 */

char *_strdup(char *str)
{
	int count;
	char *array;
	int count2;

	if (str == NULL)
		return (NULL);

	count = 0;

	while (str[count] != '\0')
	{
		count++;
	}
	array = malloc(sizeof(char) * (count + 1));
	if (array == NULL)
		return (NULL);
	for (count2 = 0; count2 < count; count2++)
	{
		array[count2] = str[count2];
	}
	array[count2] = '\0';
	return (array);
}
