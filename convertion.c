#include "main.h"
#include <stdlib.h>

unsigned int _abs(int i);
char *get_int(int num);
int get_numbase_len(unsigned int num, unsigned int base);
void fill_numbase_buff(unsigned int num, unsigned int base,
		char *buff, int buff_size);

/**
 * _abs - gets integer value
 * @i: integer
 * Return: unsigned int
 */

unsigned int _abs(int i)
{
	if (i < 0)
		return (-(unsigned int)i);
	return ((unsigned int)i);
}

/**
 * get_numbase_len - gets the length of buffer
 * @num: length for
 * @base: num used by buffer
 * Return: int with len
 */

int get_numbase_len(unsigned int num, unsigned int base)
{
	int len = 1;

	while (num > base - 1)
	{
		len++;
		num /= base;
	}
	return (len);
}

/**
 * get_int - pointer to new string
 * @num: int to be converted
 * Return: new pointer string
 */

char *get_int(int num)
{
	unsigned int temp;

	long num_l = 0;
	char *ret;
	int length = 0;

	temp = _abs(num);
	length = get_numbase_len(temp, 10);

	if (num < 0 || num_l < 0)
		length++;
	ret = malloc(length + 1);
	if (!ret)
		return (NULL);
	fill_numbase_buff(temp, 10, ret, length);
	if (num < 0 || num_l < 0)
		ret[0] = '-';
	return (ret);
}

/**
 * fill_numbase_buff - fill buffer with num up to base 36
 * @num: converted int
 * @base: used in convertion
 * @buff: to fill with result
 * @buff_size: bytes
 */

void fill_numbase_buff(unsigned int num, unsigned int base,
			char *buff, int buff_size)
{
	int rem, i = buff_size - 1;

	buff[buff_size] = '\0';
	while (i >= 0)
	{
		rem = num % base;
		if (rem > 9)
			buff[i] = rem + 87;
		else
			buff[i] = rem + '0';
		num /= base;
		i--;
	}
}
