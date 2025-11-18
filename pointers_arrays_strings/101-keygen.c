#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates a valid password for 101-crackme
 *
 * Return: 0
 */
int main(void)
{
	int sum = 0;
	int ch;

	srand(time(0));

	while (sum < 2772)
	{
		ch = rand() % 94 + 33; /* caractères imprimables ASCII */
		if (sum + ch > 2772)
			ch = 2772 - sum;

		sum += ch;
		putchar(ch);
	}

	return (0);
}
