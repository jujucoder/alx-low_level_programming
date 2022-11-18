#include "3-calc.h"

/**
 * op_add - add two numbers
 * @a: number 1
 * @b: number 2
 * Return: solution
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - returns the differnece between two numbers
 * @a: number 1
 * @b: number 2
 * Return: solution
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplies two numbers
 * @a: number 1
 * @b: number 2
 * Return: solution
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divide two numbers
 * @a: number 1
 * @b: number 2
 * Return: solution
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - find the modulus of two numbers
 * @a: number 1
 * @b: number 2
 * Return: solution
 */
int op_mod(int a, int b)
{
	if (b == 0)
        {
                printf("Error\n");
                exit(100);
        }
	return (a % b);
}

