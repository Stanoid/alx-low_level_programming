#include "main.h"

/**
 * print_array - print n of array
 * @x: array 
 * @y:output
 
 */
void print_array(int *x, int y)
{
	int i;

	for (i = 0; i < (y - 1); i++)
	{
		printf("%d, ", x[i]);
	}
		if (i == (y - 1))
		{
			printf("%d", x[y - 1]);
		}
			printf("\n");
}
