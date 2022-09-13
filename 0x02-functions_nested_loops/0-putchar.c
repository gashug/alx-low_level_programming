#include "main.h"

/**
 * main - entry point
 *
 * Description: prints _putchar
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int i;
	char c[10] = "_putchar";

	for (i = 0; i < 8; i++)
		_putchar(c[i]);

	_putchar(10);

	return (0);
}
