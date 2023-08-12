#include <stdio.h>
/**
 * main - possible different combinations of two digits
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int t, s;

	for (t = 48; t <= 56; t++)
	{
		for (s = 49; s <= 57; s++)
		{
			if (s > t)
			{
			putchar(t);
			putchar(s);
				if (t != 56 || s != 57)
				{
				putchar(',');
				putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
