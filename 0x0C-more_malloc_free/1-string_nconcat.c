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
	char *s;
	unsigned int s1len, s2len, outp, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (s1len = 0; s1[s1len] != '\0'; s1len++)
		continue;
	for (s2len = 0; s2[s2len] != '\0'; s2len++)
		continue;
	if (n >= s2len)
		n = s2len;
	outp = s1len + n;
	s = malloc(sizeof(char) * (outp + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		s[i] = s1[i];
	for (j = s1len; j < s1len + n; j++)
		s[j] = s2[j - s1len];
	s[j] = '\0';
	return (s);
}
