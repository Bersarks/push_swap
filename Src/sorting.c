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

void	sorting(t_a_stack **a_stack, t_b_stack **b_stack)
{
	int	size;

	size = lstsize((*a_stack));
	while (size > 3 && in_line((*a_stack), size))
	{
		if (size > 3)
		{
			push_b(b_stack, a_stack);
			size--;
		}
		if (size == 3)
			sort_trion(a_stack, size);
	}
	while ((*b_stack))
	{
		if (control((*a_stack), (*b_stack), size) == 1)
		{
			push_a(a_stack, b_stack);
			rotate_a(a_stack);
		}
		else if (control((*a_stack), (*b_stack), size) == 2)
			push_a(a_stack, b_stack);
		else if (control((*a_stack), (*b_stack), size) == 3)
		{
			push_a(a_stack, b_stack);
			swap_a(a_stack);
		}
		else if (control((*a_stack), (*b_stack), size) == 4)
		{
			reverse_rotate_a(a_stack);
			reverse_rotate_a(a_stack);
			push_a(a_stack, b_stack);
			rotate_a(a_stack);
			rotate_a(a_stack);
			rotate_a(a_stack);
		}
	}
}
