#include "main.h"

/**
 * print_alphabet_x10 - check the code.
 *
 * Return: Always 0.
*/

void print_alphabet_x10(void)
{
	int j = 0;

	while (j < 10)
	{
		int i = 97;

		while (i < 123)
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
		j++;
	}

}
