#include "main.h"

/**
 * print_int - prints integer
 * @arr: list of arguments
 * Return: number of arguments to be printed
 */
int print_int(va_list arr)
{
	unsigned int n, count, count_stat, num_abs;
	int num;

	num = va_arg(arr, int);
	count = 0;

	if (num < 0)
	{
		num_abs = (num * -1);
		count += _putchar('-');
	}
	else
		num_abs = num;

	n = num_abs;
	count_stat = 1;
	while (n > 9)
	{
		n /= 10;
		count_stat *= 10;
	}

	while (count_stat >= 1)
	{
		count += _putchar(((num_abs / count_stat) % 10) + '0');
		count_stat /= 10;
	}
	return (count);
}
