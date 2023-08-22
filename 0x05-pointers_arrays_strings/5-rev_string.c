#include "main.h"
/**
 * rev_string - Reverses a string
 * @str: Input string
 * Return: output in reverse
 */
void rev_string(char *str)
{
	char revstr = str[0];
	int count = 0;
        int i;

        while (str[count] != '\0')
		count++;
        for (i = 0; i < count; i++)
        {
                count--;
                revstr = str[i];
                str[i] = str[count];
                str[count] = revstr;
        }
}
