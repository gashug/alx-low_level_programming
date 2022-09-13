#include "main.h"

/**
 * main - entry point
 *
 * Description: prints _putchar
 *
 * Return: 0 (Success)
 */

void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
		_putchar(i);

	_putchar('\n');
}
