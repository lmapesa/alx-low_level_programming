#include <unistd.h>

/**
 * _putchar - write the char c to stdout
 * @c: char to print
 *
 * Return: If success then 1.
 * On error return -1 and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
