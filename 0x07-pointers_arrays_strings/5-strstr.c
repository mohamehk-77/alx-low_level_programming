#include "main.h"
/**
 * *_strstr -  that locates a substring
 * @haystack: do somethink
 * @needle: do somethink
 * Return: NULL
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
	return (NULL);
}
