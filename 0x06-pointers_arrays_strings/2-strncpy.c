#include "main.h"
/**
 * _strncpy - copy a string
 * @first: input value
 * @second: input value
 * @n: input value
 *
 * Return: first
 */
char *_strncpy(char *first, char *second, int n)
{
	int j;

	j = 0;
	while (j < n && second[j] != '\0')
	{
		first[j] = second[j];
		j++;
	}
	while (j < n)
	{
		first[j] = '\0';
		j++;
	}

	return (first);
}
