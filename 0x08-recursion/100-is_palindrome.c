#include "main.h"
/**
 * lenght - Find the legnth of a srting.
 * @s: String.
 * Return: The lenght of the string.1
 */
int lenght(char *s)
{
	if (*s)
	{
		return (1 + lenght(s + 1));
	}

	return (0);
}

/**
  * function - Have the condition to define if it is a palindrome.
  * @s: String.
  * @len: Lenght of the string.
  * @count: Counter of the function.
  * Return: 1 if it is a palindrome and 0 if it doesn't.
  */
int function(char *s, int len, int count)
{
	if (count > len)
	{
		return (1);
	}
	else if (*(s + count) == *(s + len))
	{
		return (function(s, len - 1, count + 1));
	}
	else
	{
		return (0);
	}
}

/**
  * is_palindrome - Answer if the string is a palindrome.
  * @s: String.
  * Return: 1 if it is palindrome and 0 if it doesn't.
  */
int is_palindrome(char *s)
{
	int len = lenght(s) - 1;
	int count = 0;

	return (function(s, len, count));
}
