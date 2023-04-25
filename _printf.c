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

	// we will put the other format specifier later on

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

	// we need to make the handle_print function here but i dont know how to implement it exactly also,
	// I dont get your function signature // plzz explain it to me <3

	count = parse_format(format, get_opt, ap); // handle_print()

	va_end(ap);

	return (count);
}
