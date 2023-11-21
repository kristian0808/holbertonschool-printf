#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>

typedef struct print_data
{
	char *type;
	int (*print)(va_list list);
} print_data;
