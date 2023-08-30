#include "main.h"
#include <stdlib.h>
/**
 * argstostr - Main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int a, b, d = 0, e = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			e++;
	}
	e += ac;

	str = malloc(sizeof(char) * e + 1);
	if (str == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
	for (b = 0; av[a][b]; b++)
	{
		str[d] = av[a][b];
		d++;
	}
	if (str[d] == '\0')
	{
		str[d++] = '\n';
	}
	}
	return (str);
}
