#include "main.h"

/**
 * print_alphabet - entry point
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

void print_alphabet_x10(void)
{
	int j;
	
	for (j = 0; j < 10; j++)
		print_alphabet();
}
