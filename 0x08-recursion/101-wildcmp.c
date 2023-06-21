#include "main.h"

/**
 * substring_match - matching sub strings
 * @s1: first string
 * @s2: second string
 * @after_wldcd: char after wildcard
 * Return: substring
 */

int substring_match(char *s1, char *s2, char *after_wldcd)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == '\0' && *s2 == '*')
		return (substring_match(s1, s2 + 1, s2 + 1));
	if (*s1 == '\0' && *s2 != '\0')
		return (0);
	if (*s2 == '*')
		return (substring_match(s1, s2 + 1, s2 + 1));
	if (*s1 == *s2)
		return (substring_match(s1 + 1, s2 + 1, after_wldcd));
	else
		return (substring_match(s1 + 1, after_wldcd, after_wldcd));
}

/**
 * wildcmp - compare if string using wildcards
 * @s1: first string
 * @s2: second string
 * Return: 1 if matched, 0 if not
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	else if (*s2 == '*')
		return (substring_match(s1, (s2 + 1), (s2 + 1)));
	else
		return (0);
}
