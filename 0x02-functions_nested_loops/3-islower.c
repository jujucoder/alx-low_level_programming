#include "main.h"

/**
 * _islower - Entry point
 *
 * Description:Program that checks for lowercase characters
 *
 * Return:1 if lowercase, 0 if uppercase
 */

int _islower(int c)
{
	if (c > 'a' && c < 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
