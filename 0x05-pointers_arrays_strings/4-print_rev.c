#include "main.h"
/**
 * print_rev - print a string in reverse
 * @s: string
 * return: 0
 */
void print_rev(char *str)
{
	int len = 0;
	int i;

	while (*str != '\0')
	{
		len++;
		str++;
	}
	str--;
	for (i = len; i > 0; i--)
	{
		_putchar(*str);
		str--;
	}

	_putchar('\n');
}
