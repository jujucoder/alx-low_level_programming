#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main -entry point
 * @argc: argument count
 * @argv: argument array
 * Return: 0(error) 1 (success)
 */



int main(int argc, char **argv)
{
	int number, count;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	number = atoi(argv[1]);
	if (number < 0)
		printf("0\n");
	else
	{
		while (number > 0)
		{
			count++;
			if (number >= 25)
			{
				number -= 25;
				continue;
			}
			if (number >= 10)
			{
				number -= 10;
				continue;
			}
			if (number >= 5)
			{
				number -= 5;
				continue;
			}
			if (number >= 2)
			{
				number -= 2;
				continue;
			}
			number--;
		}
		printf("%d\n", count);
	}
	return (0);
}
