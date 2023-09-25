#include "main.h"
/**
 * _strpbrk - Entry point
 * @t: input
 * @accept: input
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *t, char *accept)
{
		int k;

		while (*t)
		{
			for (k = 0; accept[k]; k++)
			{
			if (*t == accept[k])
			return (t);
			}
		t++;
		}i

	return ('\0');
}
