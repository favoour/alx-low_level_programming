#include "main.h"

/**
 * _islower - check the code.
 * @c: The character to check
 * Return: 1 if lower, 0 otherwise
*/

int _test_islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
