#include <stdio.h>
/**
 * main - prints all possible different combinations of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c, d, l;

	for (c = 48; c < 58; c++)
	{
		for (d = 49; d < 58; d++)
		{
			for (l = 50; l < 58; l++)
			{
				if (l > d && d > c)
				{
					putchar(c);
					putchar(d);
					putchar(l);
				if (c != 55 || d != 56)
				{
				putchar(',');
				putchar(' ');
				}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

