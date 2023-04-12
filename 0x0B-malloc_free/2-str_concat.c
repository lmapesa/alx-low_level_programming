#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - concatenates 2 strings
 * @a1: string to be concatenated
 * @a2: other string to be concatenated
 *
 * Return: A pointer to the new string created (Success), or NULL (Error)
 */
char *str_concat(char *a1, char *a2)
{
	char *a3;
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

	while (a1 && a1[len1])
		len1++;
	while (a2 && a2[len2])
		len2++;

	a3 = malloc(sizeof(char) * (len1 + len2 + 1));
	if (a3 == NULL)
		return (NULL);

	i = 0;
	j = 0;

	if (a1)
	{
		while (i < len1)
		{
			a3[i] = a1[i];
			i++;
		}
	}

	if (a2)
	{
		while (i < (len1 + len2))
		{
			a3[i] = a2[j];
			i++;
			j++;
		}
	}
	a3[i] = '\0';

	return (a3);
}
