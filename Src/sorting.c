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
	int			max;

	while (in_line((*a_stack), lstsize(*a_stack)))
	{
		max = array_max_val(array_creator(*a_stack));
		if (max > 2)
		{
			if (max == 3 && lstsize(*a_stack) == 5)
			{
				reverse_rotate_a(a_stack);
				reverse_rotate_a(a_stack);
				push_b(b_stack, a_stack);
				max--;
			}
			if (max == 4 || (max == 3 && lstsize(*a_stack) == 4))
			{
				reverse_rotate_a(a_stack);
				push_b(b_stack, a_stack);
				max--;
			}
		}
		if (lstsize(*a_stack) == 3)
			sort_trion(a_stack, lstsize(*a_stack));
	}
	//print_a_struct(*a_stack);
	//print_b_struct(*b_stack);
}
