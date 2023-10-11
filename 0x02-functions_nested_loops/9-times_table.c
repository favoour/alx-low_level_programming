#include "main.h"

/**
 * times_table - check the code
 *
 * Return: Always 0.
*/

void times_table(void)
{
	int i, n, pT, pO, lT;

	i = 0;
	pT = 0;
	pO = 0;

	while (i < 10)
	{
		n = 0;
		lT = 0;

		while (n < 10)
		{
			lT = n * i;

			pO = lT % 10;

			pT = (lT - pO) / 10;

			if (pT == 0 && n > 0)
			{
				_putchar(' ');
			}
			else if (n > 0)
			{
				_putchar(pT + '0');
			}
			_putchar(pO + '0');
			if (n == 9)
			{
				break;
			}
		_putchar(',');
			_putchar(' ');
			n++;
		}
		_putchar('\n');
		i++;
	}
}
