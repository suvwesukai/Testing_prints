#include "main.h"

/**
 * print_hex - prints unsigned integers in hexadecimal format
 * @arr: list of arguments
 * Return: number of characters printed
 */
int print_hex(va_list arr)
{
	unsigned int num;
	int count, i;
	char buffer[100];
	
	num = va_arg(arr, unsigned int);
	count = 0, i = 0;

	if (num == 0)
	{
		count += _putchar('0');
		return (count);
	}

	while (num != 0)
	{
		unsigned int remainder = num % 16;
		if (remainder < 10)
			buffer[i++] = 48 + remainder;
		else
			buffer[i++] = 87 + remainder;
		num /= 16;
	}

	while (i--)
		count += _putchar(buffer[i]);

	return (count);
}

