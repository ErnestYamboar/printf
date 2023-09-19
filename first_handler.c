#include "main.h"
#include <stdlib.h>

/**
 * my_putchar - is used to print output to the std output
 * @c: is the only function allowed to use to print to s * output.
 * Return: a character
 */
int my_putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * my_strlen - function that calculate the length of a string
 * @str: string to calculate from
 * Return: the string count
 */
int my_strlen(char *str)
{
	int i;
	int len = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}
		return (len);
}

/**
 * my_printNum - function that print an integer
 * @num: number
 * Return: number
 */
int my_printNum(int num)
{
	int m = 0;
	char *str;
	int len = 0;
	int tmp;

	if (num == 0)
	{
		return (my_putchar('0'));
	}
	if (num < 0)
	{
		my_putchar('-');
		num = -num;
	}
	if (num > 0)
	{
		while (tmp > 0)
		{
			tmp /= 10;
			len++;
		}
		str = malloc(sizeof(char) * (len + 1));
		if (str == NULL)
			return (-1);
		str[m] = '0' + num % 10;
		num /= 10;
		m++;
	}
	str[m] = '\0';

	for (m = len - 1; m >= 0; m--)
		my_putchar(str[m]);
	}
}
