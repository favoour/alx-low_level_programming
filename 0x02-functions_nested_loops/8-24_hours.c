#include "main.h"

/**
 * jack_bauer - check the code
 *
 * Return: Always 0.
*/

void jack_bauer(void)
{
	int hT, hO, mT, mO;

	hT = 0;
	while (hT <= 2)
	{
		hO = 0;
		while (hO <= 9)
		{
			if (hT == 2 && hO > 3)
			{
				break;
			}
			mT = 0;
			while (mT <= 5)
			{
				mO = 0;
				while (mO <= 9)
				{
					_putchar(hT + '0');

					_putchar(hO + '0');

					_putchar(':');

					_putchar(mT + '0');

					_putchar(mO + '0');

					_putchar('\n');

					mO++;
				}
				mT++;
			}
			hO++;
		}
		hT++;
	}
}
