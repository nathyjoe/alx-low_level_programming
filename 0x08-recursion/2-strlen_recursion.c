/*
 * file: 2-strlen_recursion.c
 * Auth: sumone
 */

#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 *  @s: The string to be measured.
 *
 *  Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	return (*s ? (1 + _strlen_recursion(++s)) : 0);
}
