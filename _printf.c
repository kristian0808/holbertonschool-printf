#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
/**
 * _printf - function that produces output according to a format
 * @format: format to be used to print the output
 * Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list args;
	int i = 0;
	int (*func)(va_list);
	int count = 0;
	int length;

	if (format != NULL)
	{
		length = strlen(format);
		if ((length != 1) || (format[0] != '%'))
