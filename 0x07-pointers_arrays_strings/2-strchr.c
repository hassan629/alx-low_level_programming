#include "main.h"
/**
 * _strchr - Entry point
 * @j: input
 * @m: input
 * Return: Always 0 (Success)
 */
char *_strchr(char *j, char m)
{
	int i = 0;

	for (; j[i] >= '\0'; i++)
	{
		if (j[i] == m)
			return (&j[i]);
	}
	return (0);
}
