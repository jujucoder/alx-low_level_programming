#include "variadic_functions.h"
/**
 * sum_them_all - sum all arguments
 * @n: number of arguments
 * Return: sum of args
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list ptr;

	va_start(ptr, n);
	sum = 0;

	for (i = 0; i < n; i++)
		sum += va_arg(ptr, int);

	va_end(ptr);
	return (sum);
}
