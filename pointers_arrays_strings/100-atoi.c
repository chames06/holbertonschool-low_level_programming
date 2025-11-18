#include "main.h"
#include <limits.h>

/**
 * _atoi - converts a string to an integer with overflow protection
 * @s: pointer to the string
 *
 * Return: converted integer
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int num = 0;
	int found = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign = sign * -1;
		else if (s[i] == '+')
		{
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			int digit = s[i] - '0';

			/* Vérification pré-overflow */
			if (sign == 1)
			{
				if (num > (INT_MAX - digit) / 10)
					return (INT_MAX);
			}
			else
			{
				if (num > (-(INT_MIN + digit)) / 10)
					return (INT_MIN);
			}

			num = num * 10 + digit;
			found = 1;
		}
		else if (found)
			break;

		i++;
	}

	return (num * sign);
}
