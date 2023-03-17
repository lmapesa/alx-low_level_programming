#include <stdio.h>

/**
 * main - print alphabet in lowercase
 *
 * Describe: print alphabet in lowercase
 *
 * Return: On success Always 0
 */
 
int main()
{
    char c;

    for (c = 'a'; c <= 'z'; c++)
    {
        putchar(c);
    }
    
    putchar('\n');
    
    return 0;
}
