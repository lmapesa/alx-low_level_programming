#include <stdio.h>

/**
 * main - print the letters of the alphabet
 *
 * Description: print the the letters of the alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i, j, k;

    for (i = 0; i < 8; i++) {
        for (j = i + 1; j < 9; j++) {
            for (k = j + 1; k < 10; k++) {
                putchar(i + '0');
                putchar(',');
                putchar(' ');
                putchar(j + '0');
                putchar(',');
                putchar(' ');
                putchar(k + '0');
                putchar('\n');
            }
        }
    }

    return 0;
}
