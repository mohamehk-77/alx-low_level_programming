#include "main.h"

/**
 * *_strstr - locates a substring
 * @haystack: the string to search in
 * @needle: the substring to find
 * Return: pointer to the beginning of the located substring, or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *P = haystack;
		char *M = needle;

		while (*M && *P == *M)
		{
			P++;
			M++;
		}

		if (!*M)
		{
			return (haystack);
		}
		haystack++;
	}
	return ('\0');
}
