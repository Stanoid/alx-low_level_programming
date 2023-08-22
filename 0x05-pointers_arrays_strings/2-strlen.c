#include "main.h"
/**
 * _strlen - get length of a given string
 * @str: string
 * Return: length len
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}

	return (len);
}
