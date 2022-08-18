#include "../Lib/push_swap.h"

int	control(t_a_stack *a_stack, t_b_stack *b_stack, int count)
{
	if (count > 1)
	{
		if (b_stack->value > a_stack->value
			&& b_stack->value > a_stack->next->value
			&& b_stack->value > a_stack->next->next->value)
			return (1);
		else if (b_stack->value < a_stack->value
			&& b_stack->value < a_stack->next->value
			&& b_stack->value < a_stack->next->next->value)
			return (2);
		else if (b_stack->value > a_stack->value
			&& b_stack->value < a_stack->next->value
			&& b_stack->value < a_stack->next->next->value)
			return (3);
		else if (b_stack->value > a_stack->value
			&& b_stack->value > a_stack->next->value
			&& b_stack->value < a_stack->next->next->value)
			return (4);
	}
	return (0);
}
