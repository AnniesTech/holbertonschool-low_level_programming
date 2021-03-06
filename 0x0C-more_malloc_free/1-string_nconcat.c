#include "main.h"

/**
 * string_nconcat - Concate s1 and s2.
 * @s1: First array.
 * @s2: Second array.
 * @n: n bytes of s2
 * Return: The returned pointer should point to a newly allocated space
 * in memory which contains the contents of s1,
 * followed by the contents of s2, and null terminated
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l1, l2, i, lout;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (l1 = 0; s1[l1] != '\0'; l1++)
	;
	for (l2 = 0; s2[l2] != '\0'; l2++)
	;
	if (n > l2)
		n = l2;
	lout = l1 + n;
	s = malloc(lout + 1);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < lout; i++)
		if (i < l1)
			s[i] = s1[i];
		else
			s[i] = s2[i - l1];
	s[i] = '\0';
	return (s);
}
