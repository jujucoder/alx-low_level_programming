#include "function_pointers.h"
#include <stdlib.h>
/**
 *  array_iterator - executes a function on each element of an array
 *  @array: array
 *  @size: array size
 *  @action: function to be executed
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t count;
	if (action == NULL || array == NULL || size == NULL)
		return;
	for (count = 0; count < size; count++)
	{
		action(*(array + count));
	}
}
