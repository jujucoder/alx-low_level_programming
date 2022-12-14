#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array:where to search for the integer
 * @size: size of integer
 * @cmp: function that checks for certain integers
 * Return: -1(ERROR), index of number (SUCCESS)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int count;

	if (size <= 0)
		return (-1);
	if (array == NULL || cmp == NULL)
		return (-1);

	for (count = 0; count < size; count++)
	{
		if (cmp(*(array + count)) != 0)
		{
			return (count);
		}
	}
	return (-1);
}
