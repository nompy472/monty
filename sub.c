#include "monty.h"
/**
 *f_sub- subtracts the top element of the stack
 *@stack: pointer to node of stack
 *@line_number: counter
 */

void f_sub(stack_t **stack, unsigned int line_number)
{
	if ((*stack)->next == NULL || (*stack)->next->next == NULL)
	{
		set_op_tok_error(short_stack_error(unsigned int line_number, "sub"));
		return;
	}
	(*stack)->next->next->n += (*stack)->next->n;
	f_pop(stack, line_number);
}
