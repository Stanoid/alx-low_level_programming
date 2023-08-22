#include "main.h"

/**
 * _atoi -  string to  integer
 * @s: string
 *
 * Return:int
 */
int _atoi(char *str)
{
	int x, y, z, len, f, g;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (str[len] != '\0')
		len++;

	while (x < len && f == 0)
	{
		if (str[x] == '-')
			++y;

		if (str[x] >= '0' && str[x] <= '9')
		{
			g = str[x] - '0';
			if (y % 2)
				g = -g;
			z = z * 10 + g;
			f = 1;
			if (str[x + 1] < '0' || str[x + 1] > '9')
				break;
			f = 0;
		}
		x++;
	}

