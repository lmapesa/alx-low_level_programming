#include <string.h>
#include "main.h"

/**
 *  _strlen_recursion - To count the length os a string
 *  @s: String 2 b print
 *  Return: The length of a string
 */
int _strlen_recursion(char *s)
{
	if (*s == 0)
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
