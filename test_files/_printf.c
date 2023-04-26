#include "main.h"
#include <stdlib.h>
/**
 * @brief _printf - function to print based on the format specifier
 *
 * @param format : takes a format specifier
 * @param ...
 * @return int
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int count;

	format_t get_opt[] = {
	    {"c", set_char},
	    {"s", set_string},
	    {"%", print_percent},
	    {NULL, NULL}};

	if (!format)
	{
		return (-1);
	}

	va_start(ap, format);

	count = parse_format(format, get_opt, ap);

	va_end(ap);

	return (count);
}
