#include <stdio.h>
/**
 * main - main block
 * Description: Print all possible combinations
 * Numbers must be separated by commas and a space.
 * Return: 0
 */
 int main(void)
{
	int i, j;

	for (i = 0; i < 100; i++) {
		for (j = i; j < 100; j++) {
			if (i == j) {
				continue;
			}
			putchar('0' + i / 10);
			putchar('0' + i % 10);
			putchar(' ');
			putchar('0' + j / 10);
			putchar('0' + j % 10);
			if (i < 99 || j < 99) {
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
