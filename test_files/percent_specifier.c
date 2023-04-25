#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_percent - Prints a percent symbol
 * @valist: list of arguments
 * Return: Will return the amount of characters printed.
 */
int print_percent(__attribute__((unused)), va_list ap)
{
	_putchar('%');
	return (1);
}