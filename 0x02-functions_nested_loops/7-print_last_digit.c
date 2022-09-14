#include "main.h"

/**
 * print_last_digit - entry point
 *
 * Description: prints _putchar
 * n:stands in for integer 
 * Return: 0 (Success)
 */

int print_last_digit(int n)
{
	int last = n % 10;

	if (n < 0)
		last = last * -1;

	_putchar(last + '0');

	return (last);
}
