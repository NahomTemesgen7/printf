#include "main.h"

/**
 * is_printable - Determines whether a character is printable.
 * @c: The character being considered for evaluation.
 *
 * Return: 1 if c is printable, orelse return 0
 */
int is_printable(char c)
{
	if (c >= 32 && c < 127)
		return (1);

	return (0);
}

/**
 * append_hexa_code - Add ASCII characters in hexadecimal format to the buffer.
 * @buffer: An array of characters.
 * @i: The starting index for appending.
 * @ascii_code: ASSCI CODE.
 * Return: Always 3
 */
int append_hexa_code(char ascii_code, char buffer[], int i)
{
	char map_to[] = "0123456789ABCDEF";
	/* The hexadecimal format code consistently consists of 2 digits. */
	if (ascii_code < 0)
		ascii_code *= -1;

	buffer[i++] = '\\';
	buffer[i++] = 'x';

	buffer[i++] = map_to[ascii_code / 16];
	buffer[i] = map_to[ascii_code % 16];

	return (3);
}

/**
 * is_digit - Checks whether a character is a numeric digit.
 * @c: Refers to the character under evaluation for its digit status.
 *
 * Return: 1 if c is a digit, orelse return 0
 */
int is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}

/**
 * convert_size_number - Converts a number to a specific size as indicated
 * @num: Refers to the number that is going to undergo casting.
 * @size: Refers to the number that specifies the type to which the casting will be performed.
 *
 * Return: Represents the resulting value after the casting operation has been applied to the number.
 */
long int convert_size_number(long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((short)num);

	return ((int)num);
}

/**
 * convert_size_unsgnd - Converts a number to a specific size as indicated.
 * @num: Refers to the number that is going to undergo casting.
 * @size: Refers to the number that specifies the type to which the casting will be performed.
 *
 * Return: Represents the resulting value after the casting operation has been applied to the number.
 */
long int convert_size_unsgnd(unsigned long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((unsigned short)num);

	return ((unsigned int)num);
}

