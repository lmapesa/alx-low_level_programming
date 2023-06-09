#include <string.h>
#include "main.h"

/**
 *  _puts recursion - Print a string, then followed by a new line.
 *  @s: String to be printed
 *  Return: Void (Nothing)
 */
void _puts_recursion(char *s)
{
	if (strlen(s) == 0)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
