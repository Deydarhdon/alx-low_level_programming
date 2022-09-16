#include <stdio.h>

/**
 * main - prints the alphabeth in lowercase,
 * and then in uppercase,
 * followed by a new line
 * Return: Always 0 (success)
 */
int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		if ((alpha != 'q') && (alpha != 'e'))
		{
			putchar(alpha);
		}
		alpha++;
	}
	putchar('\n');

	return (0);
}

