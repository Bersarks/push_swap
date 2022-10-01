#include "../Lib/push_swap.h"

void	easy_sort(t_a_stack **a_stack, t_b_stack **b_stack)
{
	int	*arr;
	int	min;

	while (in_line(*a_stack, lstsize(*a_stack), 0))
	{
		arr = array_creator(*a_stack);
		min = array_min_index(arr, lstsize(*a_stack) - 1);
		rotate_a(a_stack, 0);
		if ((*a_stack)->value == arr[min])
			push_b(b_stack, a_stack);
		free(arr);
	}
	while (lstsize(*b_stack))
	{
		push_a(a_stack, b_stack);
	}
}
