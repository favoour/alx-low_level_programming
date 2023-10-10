#include "main.h"

/**
 * _islower - check the code.
 *
 * Return: 1 if lower, 0 otherwise
*/

int _islower(void)
{
	int c;

	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
