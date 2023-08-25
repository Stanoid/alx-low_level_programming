#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from second
 * @first: input value
 * @second: input value
 * @n: input value
 *
 * Return: first
 */
char *_strncat(char *first, char *second, int n)
{
	int i;
	int j;

	i = 0;
	while (first[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && second[j] != '\0')
	{
	first[i] = second[j];
	i++;
	j++;
	}
	first[i] = '\0';
	return (first);
}
