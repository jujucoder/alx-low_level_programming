#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concat two strings
 * @s1: first string
 * @s2: second string
 * Return:Null(error) pointer to newString(success)
 */

char *str_concat(char *s1, char *s2)
{
	int size1, size2, count, all;
	char *array;

	size1 = size2 = all = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[size1] != '\0')
		size1++;
	while (s2[size2] != '\0')
		size2++;
	array = malloc(sizeof(char) * (size1 + size2 + 1));
	if (array == NULL)
		return (NULL);
	for (count = 0; count < size1; count++)
		array[all++] = s1[count];
	for (count = 0; count < (size1 + size2); count++)
	{
		array[all++] = s2[count];
	}
	array[count] = '\0';
	return (array);
}
