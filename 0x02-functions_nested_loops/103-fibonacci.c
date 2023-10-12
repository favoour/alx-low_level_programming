#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
*/

int main(void)
{
	int limit = 4000000;

	int a = 1, b = 2, sum = 0;

	int next;

	while (b <= limit)
	{
		if (b % 2 == 0)
		{
			sum += b;
		}
		next = a + b;
		a = b;
		b = next;
	}

	printf("%d\n", sum);

	return (0);
}
