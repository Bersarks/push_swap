#include "../Lib/push_swap.h"

void	sort_trion(t_a_stack **content, int count)
{
	while (in_line((*content), count))
	{
		if (!((*content)->value > (*content)->next->value)
			&& (*content)->value > (*content)->next->next->value)
			reverse_rotate_a(content);
		else if ((*content)->value < (*content)->next->value
			&& (*content)->value > (*content)->next->next->value)
			reverse_rotate_a(content);
		else if ((*content)->value > (*content)->next->next->value)
			rotate_a(content);
		else if ((*content)->value < (*content)->next->next->value
			&& (*content)->value < (*content)->next->value)
			swap_a(content);
		else if ((*content)->value > (*content)->next->value)
			swap_a(content);
	}
}

void	kvintett(t_a_stack **a_stack, t_b_stack **b_stack)
{
	int	max;

	while (in_line((*a_stack), lstsize(*a_stack)))
	{
		while (lstsize((*a_stack)) >= 4)
		{
			max = array_min_val(array_creator(*a_stack), lstsize((*a_stack)) - 1);
			if (max > 2)
				over_tri(a_stack, b_stack, max);
			else
				lower_tri(a_stack, b_stack, max);
		}
		if (lstsize((*a_stack)) == 3)
		{
			sort_trion(a_stack, lstsize(*a_stack));
			push_a(a_stack, b_stack);
			push_a(a_stack, b_stack);
			break ;
		}
	}
	print_a_struct(*a_stack);
	//print_b_struct(*b_stack);
}
