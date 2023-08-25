#include "main.h"
/**
 * _strcat - concatenates strings
 * @first: input 
 * @second: input
 *
 * Return: void
 */
char *_strcat(char *first, char *second)
{
	int x;
	int y;
	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	y = 0;
	while (second[y] != '\0')
	{
		first[x] = second[y];
		x++;
		y++;
	}

	first[x] = '\0';
	return (first);
}
