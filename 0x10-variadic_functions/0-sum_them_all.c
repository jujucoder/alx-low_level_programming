#include "variadic_functions.h"

/**
 * sum_them_all - sum all arguments
 * @n: number of arguments
 * @...: variable numbers of params
 * Return: sum of args
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list num;
	int sum = 0;
	unsigned int j;

	va_start(num, n);

	for (j = 0; j < n; j++)
		sum += va_arg(num, int);


	va_end(num);

	return (sum);
}
