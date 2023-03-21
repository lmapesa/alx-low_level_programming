#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(int n)
{
	if (n < 0 || n > 15)
	{
		return;
	}
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			int result = i * j;

			if (result < 10)
			{
				_putchar(result + '0');
			} else if (result < 100)
			{
				_putchar(result / 10 + '0');
				_putchar(result % 10 + '0');
			} else
			{
				_putchar(result / 100 + '0');
				_putchar(result % 100 / 10 + '0');
				_putchar(result % 10 + '0');
			}
			if (j == n)
			{
				_putchar('\n');
			} else
				_putchar('\t');
		}
	}
}
