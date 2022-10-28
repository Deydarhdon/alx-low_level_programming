#include "main.h"

/**
 * get_bit - returns value of bit at given index
 * @n: unsigned long int input
 * @index: index of the bit
 * Return: value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	return (((n) & ((1) << (index))) ? 1 : 0);
}

