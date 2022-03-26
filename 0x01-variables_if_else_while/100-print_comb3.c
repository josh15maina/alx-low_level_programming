#include<stdio.h>

/**
 * main - prints all combinations of two numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int i = 48;
	int p = 48;

	while (p < 58)
	{
		i = 48;
		while (i < 58)
		{
			if (p != i && p < i)
			{
				putchar(p);
				putchar(i);
				if (i == 57 && p == 56)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			i++;
		}
		p++;
	}
	putchar('\n');
	return (0);
}
