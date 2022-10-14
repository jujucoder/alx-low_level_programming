#include<stdlib.h>
#include<time.h>

/**
 * main - Entry Point
 * Return:0 Always(Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("The number is positive\n");
	}
	else if (n == 0)
	{
		printf("The mumber is zero\n");
	}
	else
	{
		printf("The number is negative\n");
	}
	return (0);
}
