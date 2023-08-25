#include "main.h"
/**
 * _strcat - concatenates two strings
 * @first: input value
 * @second: input value
 *
 * Return: void
 */
char *_strcat(char *first, char *second)
{
	int i;
	int j;

	i = 0;
	while (first[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (second[j] != '\0')
	{
		first[i] = second[j];
		i++;
		j++;
	}

	first[i] = '\0';
	return (first);
}
