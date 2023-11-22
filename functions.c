#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_char - prints a character
 * @list: list of arguments from _printf
 *
 * Return: number of characters printed
 */
int print_char(va_list list)
{
	char temp = va_arg(list, int);

	putchar(temp);

	return (1);
}

/**
 * print_string - prints a string
 * @list: list of arguments from _printf
 *
 * Return: number of characters printed
 */
int print_string(va_list list)
{
	char *temp = va_arg(list, char *);
	int i = 0;
	int length = 0;
	char *nul = "(null)";

	if (temp)
	{
	while (temp[i] != '\0')
	{
		putchar(temp[i]);
		length++;
		i++;
	}
	}
	else
	{
		while (nul[i] != '\0')
		{
			putchar(nul[i]);
			length++;
			i++;
		}
	}
	return (length);
}
