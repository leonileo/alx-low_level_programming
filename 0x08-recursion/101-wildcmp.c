#include "main.h"

int strlen_no_wilds(char *str);
void iterate_wild(char **wildstr);
char *postfix_match(char *str, char *postfix);
int wildcmp(char *s1, char *s2);

/**
 * strlen_no_wilds - returns the length of a string ignoring wildcard
 *		characters.
 * @str: string
 *
 * Return: the length of the string.
 */
int strlen_no_wilds(char *str)
{
	int l = 0;
	int i = 0;

	if (*(str + l))
	{
		if (*str != '*')
			l++;

		i++;
		l += strlen_no_wilds(str + i);
	}

	return (l);
}
/**
 * iterate_wild - Iterates through a string located at a wildcard
 *	until it points to a non-wildcard character.
 * @wildstr: string
 */
void iterate_wild(char **wildstr)
{
	if (**wildstr == '*')
	{
		(*wildstr)++;
		iterate_wild(wildstr);
	}
}
/**
 * postfix_match - checks if a string matches the postfix of another
 *	string potentially containing wildcards.
 * @str: string
 * @postfix: postfix
 *
 * Return: if str and postfix are identical - a pointer to the null byte
 *	located at the end of postfix.
 *	Or - a pointer to the first unmatched character in postfix
 */
char *postfix_match(char *str, char *postfix)
{
	int str_l = strlen_no_wilds(str) - 1;
	int postfix_l = strlen_no_wilds(postfix) - 1;

	if (*postfix == '*')
		iterate_wild(&postfix);
	if (*(str + str_l - postfix_l) == *postfix && *postfix != '\0')
	{
		postfix++;
		return (postfix_match(str, postfix));
	}

	return (postfix);
}
/**
 * wildcmp - Compares two strings considering wildcard characters
 * @s1: the first string
 * @s2: the second string, may contain wildcards
 *
 * Return: if the strings are identical 1, else 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		iterate_wild(&s2);
		s2 = postfix_match(s1, s2);
	}

	if (*s2 == '\0')
		return (1);
	if (*s1 != *s2)
		return (0);

	return (wildcmp(++s1, ++s2));
}
