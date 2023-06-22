#include "monty.h"

int short_stack_error(unsigned int line_number, char *op);
int pint_error(unsigned int line_number);
int div_error(unsigned int line_number);
int pop_error(unsigned int line_number);
int pchar_error(unsigned int line_number, char *message);

/**
 * pop_error - displays error message for empty stacks
 * @line_number:  error line in script
 * Return: exit status
 */

int pop_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: can't open an empty stack\n", line_number);
	return (EXIT_FAILURE);
}

/**
 * pint_error - print erroe message for empy stack
 * @line_number: error line
 * Return: Exit status
 */

int pint_error(unsigned int line_number)
{
	fprintf(stderr, "L%d: can't pint empty stack\n", line_number);
	return (EXIT_FAILURE);
}

/**
 * short_stack_error - print math function error message
 * @line_number: error line in file
 * @op: failed operation
 * Return: Exit status
 */

int short_stack_error(unsigned int line_number, char *op)
{
	fprintf(stderr, "L%u: can't %s, stack too short\n", line_number, op);
	return (EXIT_FAILURE);
}

/**
 * div_error - print error for division by 0
 * @line_number: error line
 * Return: Exit status
 */

int div_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: division by zero\n", line_number);
	return (EXIT_FAILURE);
}

/**
 * pchar_error - error message for empty stack
 * @line_number: error line from file
 * @message: corresponding error
 * Return: Exit status
 */

int pchar_error(unsigned int line_number, char *message)
{
	fprintf(stderr, "L%u: can't pchar, %s\n", line_number, message);
	return (EXIT_FAILURE);
}
