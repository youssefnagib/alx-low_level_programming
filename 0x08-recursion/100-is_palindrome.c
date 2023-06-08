#include "main.h"

/**
 * get_length - input
 *
 * @s: Char
 *
 * Return: 1 if palindrome 
 */

int get_length(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + get_length(s + 1));
}

/**
 * check_palindrome - input
 *
 * @s: Char
 *
 * @start: Int
 *
 * @end: Int
 *
 * Return: 1 if palindrome
 */

int check_palindrome(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (*(s + start) == *(s + end))
	{
		return (check_palindrome(s, start + 1, end - 1));
	}
	return (0);
}

/**
 * is_palindrome - input
 *
 * @s: Char
 *
 * Return: 1 if palindrome
 */

int is_palindrome(char *s)
{
	int len = get_length(s);

	if (len == 0 || len == 1)
	{
		return (1);
	}
	return (check_palindrome(s, 0, len - 1));
}

/**
 * get_length - input
 *
 * @s: Charr
 * Return: 1 if palindrome
 */

int get_length(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + get_length(s + 1));
}

/**
 * check_palindrome - input
 *
 * @s: Char
 *
 * @start: Int
 *
 * @end: Int
 *
 * Return: 1 if palindrome
 */

int check_palindrome(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (*(s + start) == *(s + end))
	{
		return (check_palindrome(s, start + 1, end - 1));
	}
	return (0);
}

/**
 * is_palindrome - input
 *
 * @s: Char
 *
 * Return: 1 if palindrome
 */

int is_palindrome(char *s)
{
	int len = get_length(s);
	
	if (len == 0 || len == 1)
	{
		return (1);
	}
	return (check_palindrome(s, 0, len - 1));
}
