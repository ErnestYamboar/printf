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
 */
int my_printNum(int num)
{
	int m = 0;
	int arrNum[2048];
	int is_neg = 0;
	int counter = 0;

	if (num < 0)
	{
		is_neg = 1;
		num = -num;
	}
	if (num == 0)
	{
		arrNum[m] = 0;
		m++;
	}
	while (num > 0)
	{
		arrNum[m] = num % 10;
		num /= 10;
		m++;
	}
	if (is_neg == 1)
	{
		arrNum[m] = '-';
		m++;
	}
	counter = m;
	while (m > 0)
	{
		m--;
		my_putchar(arrNum[m] + '0');
	}
	return (counter);
}
