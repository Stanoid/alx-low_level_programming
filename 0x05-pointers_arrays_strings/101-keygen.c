#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generate a password 
 *
 * Return - true
 */
int main(void)
{
	int pwd[100];
	int x, all, y;

	all = 0;	

	srand(time(NULL));

	for (x = 0; x < 100; x++)
	{
		pwd[x] = rand() % 78;
		all += (pwd[x] + '0');
		putchar(pwd[x] + '0');
		if ((2772 - all) - '0' < 78)
		{
			y = 2772 - all - '0';
			all += y;
			putchar(y + '0');
			break;
		}
	}

	return (0);
}
