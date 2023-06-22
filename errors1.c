#include "monty.h"

int malloc_error(void);
int usage_error(void);
int f_open_error(char *filename);
int unknown_op_error(char *opcode, unsigned int line_number);
int no_int_error(unsigned int line_number);

/**
 * malloc_error - displays malloc aeero
 * Return: Exit status
 */

int malloc_error(void)
{
	fprintf(stderr, "Error: malloc failed\n");
	return (EXIT_FAILURE);
}

/**
 * usage_error - prints usage erroe
 * Return: Exit status
 */

int usage_error(void)
{
	fprintf(stderr, "USAGE: monty file\n");
	return (EXIT_FAILURE);
}

/**
 * f_open_error - displays file open error with filename
 * @filename: file to open
 * Return: Exit status
 */

int f_open_error(char *filename)
{
	fprintf(stderr, "Error: Can't open file %s\n", filename);
	return (EXIT_FAILURE);
}

/**
 * unknown_op_error - shows unknown instruction error
 * @opcode: where erroe occured
 * @line_number: line of error
 * Return: EXIT status
 */

int unknown_op_error(char *opcode, unsigned int line_number)
{
	fprintf(stderr, "L%u: unknown instructions %s\n", line_number, opcode);
	return (EXIT_FAILURE);
}

/**
 * no_int_error - displays invalid error message
 * @line_number: line where error occured
 * Return: Exit status
 */

int no_int_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: usage: push integer\n", line_number);
	return (EXIT_FAILURE);
}
