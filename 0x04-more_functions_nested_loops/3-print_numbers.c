#include "holberton.h"

/**
 * print_numbers - print 0 to 9
 * Return: 0
 */

void print_numbers(void)
{
	int i = '0';

	for (; i <= '9'; i++)
		_putchar (i);
	_putchar ('\n');
}
