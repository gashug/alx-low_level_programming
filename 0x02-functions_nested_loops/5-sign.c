#include "main.h"

/**
 * print_sign - entry point
 *
 * Description: prints _putchar
 *
 * Return: 1 if n greater than 0, -1 if n is negative , otherwise 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');

		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');

		return (-1);
	}
	else
	{
		_putchar('0');

		return (0);
	}
}
