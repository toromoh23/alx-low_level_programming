#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array of size and assign character c
 * @size: size of array
 * @c: character to assign
 * Description: create array of size size and assign character c
 * Return: pointer to array, NULL if fail
 *
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int m;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (m = 0; m < size; m++)
		str[m] = c;
	return (str);
}
