/*
 * File: 0-puts_recursion.c
 * Auth: blaedge
 */

#include "main.h"

/**                                                                              * _puts_recursion - Prints a string, followed by a new line.                    * @s: The string to be printed.                                                 */                                                                             void _puts_recursion(char *s)                                                   {
	if (*s)
	{
		_putchar(*s);
		_puts_recursions(s+1);
	}
	
	else
		_putchar('\n');
}
