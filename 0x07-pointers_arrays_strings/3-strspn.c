#include "main.h"
/**
 * _strspn - Entry point
 * @p: input
 * @accept: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *p, char *acc)
{
	unsigned int n = 0;
	int r;

	while (*p)
	{
		for (r = 0; acc[r]; r++)
		{
			if (*p == acc[r])
			{
				n++;
				break;
			}
			else if (acc[r + 1] == '\0')
				return (n);
		}
		p++;
	}
	return (n);
}
