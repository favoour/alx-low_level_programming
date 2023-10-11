#include "main.h"

/**
 * print_last_digit - check the code
 * @n: integer
 * Return: Always 0.
*/

int print_last_digit(int n)
{
	int r;

	r = n % 10;

	if (r <= 0)
	{
		r = -1 * r;
	}
	_putchar(r + '0');

	return (r);
}
