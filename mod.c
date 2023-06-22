#include "monty.h"

/**
 * f_mod - computes the rest of the division
 * @stack:pointer to stack head
 * @line_number: counter
*/

void f_mod(stack_t **stack, unsigned int line_number)
{
	if ((*stack)->next == NULL || (*stack)->next->next == NULL)
	{
		set_op_tok_error(short_stack_error(unsigned int line_number, "mod"));
		return;
	}
	(*stack)->next->next->n %= (*stack)->next->n;
	f_pop(stack, line_number);
}
