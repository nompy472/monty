#include "monty.h"

/**
 * f_pchar - prints a char at the top of the stack,
 * followed by a new line
 * @stack: pointer to head node of stack
 * @line_number: Bytcode file line counter
*/

void f_pchar(stack_t **stack, unsigned int line_number)
{
	if ((*stack)->next == NULL)
	{
		set_op_tok_error(pchar_error(line_number, "stack empty"));
		return;
	}
	if ((*stack)->n < 0 || (*stack)->next->n > 127)
	{
		set_op_tok_error(pchar_error(line_number,
					"Value out of range"));
		return;
	}
	printf("%c\n", (*stack)->next->n);
}
