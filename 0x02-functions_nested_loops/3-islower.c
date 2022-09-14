#include "main.h"

/**
 * _islower - entry point
 *
 * Description: prints _putchar
 *
 * Return: 0 (Success)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);

	else
		return (0);
}
