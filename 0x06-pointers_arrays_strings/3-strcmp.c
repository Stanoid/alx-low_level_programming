#include "main.h"
/**
 * _strcmp - compare string values
 * @v1: input value
 * @v2: input value
 *
 * Return: v1[i] - v2[i]
 */
int _strcmp(char *v1, char *v2)
{
	int i;

	i = 0;
	while (v1[i] != '\0' && v2[i] != '\0')
	{
		if (v1[i] != v2[i])
		{
			return (v1[i] - v2[i]);
		}
		i++;
	}
	return (0);
}
