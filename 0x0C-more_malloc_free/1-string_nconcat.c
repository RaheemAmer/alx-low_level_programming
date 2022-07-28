#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concat two strings
 * @s1: the first string
 * @s2: the second string
 * @n: number of characters to take from the second string
 *
 * Return: a pointer to the new concatinated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;
	unsigned int l, i, j;
	unsigned int len1 = 0;
	unsigned int len2 = 0;

	if (s1 != NULL)
	{
		while (s1[len1] != '\0')
			len1++;
	} else
	{
		len1 = 0;
	}
	if (s2 != NULL)
	{
		while (s2[len2] != '\0')
			len2++;
	} else
	{
		len2 = 0;
	}
	l = len2 > n ? n : len2;
	new_str = malloc((len1 + l + 1) * sizeof(*new_str));
	if (new_str == NULL)
	{
		free(new_str);
		return (NULL);
	}
	for (i = 0; i < len1; i++)
		new_str[i] = s1[i];
	for (j = 0; j < l; j++)
		new_str[i + j] = s2[j];
	new_str[i + j] = '\0';

	return (new_str);
}
