#include "main.h"

int find_strlen(char *s);
int check_palindrome(char *s, int l, int i);
int is_palindrome(char *s);

/**
 * find_strlen - Returns the length of a string.
 * @s: string
 *
 * Return: the length of a string.
 */
int find_strlen(char *s)
{
	int l = 0;

	if (*(s + l))
	{
		l++;
		l += find_strlen(s + l);
	}

	return (l);
}
/**
 * check_palindrome - Checks if a string is a palindrome
 * @s: string
 * @l: length of the string
 * @i: index
 *
 * Return: if the string is palindrome 1 else 0
 */
int check_palindrome(char *s, int l, int i)
{
	if (s[i] == s[l / 2])
		return (1);
	if (s[i] == s[l - i - 1])
		return (check_palindrome(s, l, i + 1));

	return (0);
}
/**
 * is_palindrome - Checks if a string is a palidrome.
 * @s: string
 *
 * Return: if the string is palindrome 1 or 0(False)
 */
int is_palindrome(char *s)
{
	int i = 0;
	int l = find_strlen(s);

	if (!(*s))
		return (1);

	return (check_palindrome(s, l, i));
}
