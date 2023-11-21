#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

int _printf(const char *format, ...)
{
	va_list ag_list;
	int i, len = 0;
	print_data p_func[] =
	{
		{"s", pr_string},
		{"c", pr_char},
		{NULL, NULL}
	};
}
