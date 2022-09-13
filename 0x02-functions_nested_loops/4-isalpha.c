#include "main.h"

/**
 * main - entry point
 *
 * Description: prints _putchar
 *
 * Return: 0 (Success)
 */

int _isalpha(int c)
{
        if ((c >= 'a' || c>= 'A') && (c <= 'z' || c<= 'Z'))
                return (1);

        else
                return (0);
}
