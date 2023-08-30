#include <stdlib.h>
#include "main.h"

/**
 * count_word - Help function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */
int count_word(char *s)
{
	int flag, y, z;

	flag = 0;
	z = 0;

	for (y = 0; s[y] != '\0'; y++)
	{
		if (s[y] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			z++;
		}
	}

	return (z);
}
/**
 * **strtow - Splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int p, q = 0, len = 0, words, y = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (p = 0; p <= len; p++)
	{
		if (str[p] == ' ' || str[p] == '\0')
		{
			if (y)
			{
				end = p;
				tmp = (char *) malloc(sizeof(char) * (y + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[q] = tmp - y;
				q++;
				y = 0;
			}
		}
		else if (y++ == 0)
			start = p;
	}

	matrix[q] = NULL;

	return (matrix);
}
