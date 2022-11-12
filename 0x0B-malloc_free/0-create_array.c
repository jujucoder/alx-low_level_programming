#include "main.h"
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int count;

	if (size == 0)
	{
		return (NULL);
	}
	array = malloc(size);

	for (count = 0; count < size; count ++)
		array[count] = c;
	array[count] = '\0';
	return (array);
}


