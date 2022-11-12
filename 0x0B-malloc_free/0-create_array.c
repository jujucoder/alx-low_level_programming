#include "main.h"
#include <stdlib.h>
/**
 * create_array - create an array of chars
 * @size:size of array
 * @c:char to to be in the array
 * Return: NULL(error) pointer to array(success)
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int count;

	if (size == 0)
	{
		return (NULL);
	}
	array = malloc(size);
	if (array == NULL)
		return (NULL);

	for (count = 0; count < size; count++)
		array[count] = c;
	array[count] = '\0';
	return (array);
}


