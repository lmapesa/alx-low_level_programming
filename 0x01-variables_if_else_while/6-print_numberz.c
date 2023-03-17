#include <stdio.h>

/**
 * main - print single digit numbers
 *
 * Description: print single digit numbers
 * Return: Always ) (Success)
 */

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(num + '0');
		num++;
	}
	putchar('\n');
	return (0);
}
