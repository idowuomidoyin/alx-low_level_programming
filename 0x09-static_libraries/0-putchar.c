#include "main.h"

/**
 * _isupper - uppercase letters
 * @c: char to check
 *
 * Return: 0 or 1
 */

int _isupper(int c)
{
	return (write(1, &c, 1));
}
