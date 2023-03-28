#include "main.h"

/**
 * get_func - returns a function pointer corresponding
 * to conversion specifier.
 * @s: the conversion specifier character
 * Return: a function pointer corresponding to the
 * conversion specifier.
 */

int (*get_func(char s))(va_list)
{
	int i;

	conv_t convs[] = {
		{"c", print_char},
		{"s", print_string},
		{"d", print_decimal},
		{"i", print_int},
		{"b", print_binary},
		{NULL, NULL}
	};
}
