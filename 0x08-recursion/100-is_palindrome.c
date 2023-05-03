#include "main.h"
int is_palindrome_helper(char *s, int len);
int _strlen_recursion(char *s);

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to check
 *
 * Return: length of s
 */
int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
	return (0);
}

/**
 * is_palindrome_helper - checks if a string is a palindrome
 * @s: string to check
 * @len: length of s
 *
 * Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome_helper(char *s, int len)
{
	if (len <= 1)
		return (1);
	if (*s != *(s + len - 1))
		return (0);
	return (is_palindrome_helper(s + 1, len - 2));
}
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to check
 *
 * Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	if (len <= 1)
		return (1);
	return (is_palindrome_helper(s, len));
}
