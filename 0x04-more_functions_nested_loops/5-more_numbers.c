#include "holberton.h"

/**
 * more_numbers - prints number from 0 to 14
 * 10 times.
 * Return: 0
 */

void more_numbers(void)
{
	char i;
	int counter;

	for (counter = 1; counter <= 10; counter++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i / 10 > 0)
				_putchar ((i / 10) + '0');
			_putchar ((i % 10) + '0');
		}
		_putchar ('\n');
	}
}