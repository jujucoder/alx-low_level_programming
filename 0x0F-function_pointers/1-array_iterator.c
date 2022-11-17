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

	count = 0;

	if (action == NULL || size < count || array == NULL)
		return;
	for (count = 0; count < size; count++)
	{
		action(*(array + count));
	}
}
