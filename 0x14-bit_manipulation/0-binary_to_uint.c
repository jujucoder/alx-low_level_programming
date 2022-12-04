#include "main.h"

/**
 * binary_to_uint - converts binary to uint
 * @b: binary
 * Return: uint (success) 0(error)
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int total, exp;
	int i, count;

	exp = 1;
	total = 0;

	if (b == NULL)
		return (0);

	for (count = 0; b[count] != '\0'; count++)
		;

	for (i = count - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
			total += exp;
		exp *= 2;
	}


	return (total);

}
