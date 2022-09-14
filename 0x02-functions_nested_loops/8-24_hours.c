#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int k = 48;

	while (k <= 50)
	{
		int l = 48;
		
		while (l <= 57)
		{
			int i = 48;

			while (i <= 53)
			{
				int j = 48;

				while (j <= 57)
				{
					if (k >= 50 && l >= 52)
						break;

					_putchar(k);
					_putchar(l);
					_putchar(':');
					_putchar(i);
					_putchar(j);
					_putchar('\n');
					j++;
				}
				i++;
			}
			l++;
		}
		k++;
	}
}
