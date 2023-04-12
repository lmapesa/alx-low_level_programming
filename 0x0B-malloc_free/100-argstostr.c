#include "main.h"
#include <stdlib.h>
/**
  *argstostr - This concatenates all arguments of the program
  *@ac: Argument count
  *@pa: The pointer to array of size ac
  *Return: NULL if ac == 0 or pa == null, Pointer to new string and NULL on fail.
  */
char *argstostr(int ac, char **pa)
{
	int i, j, k, size;
	char *arg;

	size = 0;
	k = 0;
	if (ac == 0 || pa == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (pa[i][j])
		{
			size++;
			j++;
		}
		size++;
		i++;
	}
	arg = malloc((sizeof(char) * size) + 1);
	if (arg == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (pa[i][j])
		{
			arg[k] = pa[i][j];
			j++;
			k++;
		}
		arg[k] = '\n';
		k++;
		i++;
	}
	arg[k] = '\0';
	return (arg);
}
