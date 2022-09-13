#include "main.h"

/**
 * main - entry point
 *
 * Description: prints _putchar
 *
 * Return: 0 (Success)
 */

void jack_bauer(void)
{
	int i, j, k, l;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 6; j++)
		{
			for (k = 0; k < 10; k++)
			{
				for (l = 0; l < 3; l++)
				{
					_putchar(l);
					_putchar(k);
					_putchar(':');
					_putchar(j);
					_putchar(i);
				}
			}
		}
	}

}
