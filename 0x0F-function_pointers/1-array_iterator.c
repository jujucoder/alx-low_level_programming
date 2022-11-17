#include "function_pointers.h"

/**
 *  array_iterator - executes a function on each element of an array
 *  @array: array
 *  @size: array size
 *  @action: function to be executed
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t count;

	if (action == NULL || size < 0 || array == NULL)
		return;
	for (count = 0; count < size; count++)
	{
		action(*(array + count));
	}
}
