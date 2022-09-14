#include "main.h"

/**
 * _isalpha - entry point
 *
 * Description: prints _putchar
 *
 * Return 1 if c is lowercase or uppercase, otherwise 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' || c >= 'A') && (c <= 'z' || c <= 'Z'))
		return (1);
	else
		return (0);
}
