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

void	kvintett(t_a_stack **a_stack)
{
	int	*arr;
	int	max;

	arr = array_creator(*a_stack);
	max = array_max_val(arr);
	while (*arr)
	{
		printf("Array: %d ", *arr);
		printf("Value: %d ", (*a_stack)->value);
		printf("Index: %d\n", (*a_stack)->index);
		(*a_stack) = (*a_stack)->next;
		arr++;
	}
}
