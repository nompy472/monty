#include "monty.h"

/**
 * f_mul - multiplies the first two elements of the stack.
 * @stack: pointer to stack head
 * @line_number: counter
*/

void f_mul(stack_t **stack, unsigned int line_number)
{
	if ((*stack)->next == NULL || (*stack)->next->next == NULL)
	{
		set_op_tok_error(short_stack_error(unsigned int line_number, "mul"));
		return;
	}
	(*stack)->next->next->n *= (*stack)->next->n;
	f_pop(stack, line_number);
}
