#include "../Lib/push_swap.h"

int	*array_creator(t_a_stack *a_stack)
{
	int		*arr;
	int		index;

	arr = calloc(sizeof(int), lstsize(a_stack));
	index = 0;
	while (a_stack)
	{
		arr[index++] = a_stack->value;
		a_stack = a_stack->next;
	}
	return (arr);
}

int	array_min_val(int *arr, int size)
{
	int    x;
    int y;
    int count;
    int count_2;

    y = 0;
    count = 0;
    count_2 = size;
    while (size)
    {
        x = 0;
        count = 0;
        while (x <= count_2)
        {
            if (arr[y] < arr[x])
                count++;
            x++;
        }
        if (count == x - 1)
            return (y);
        y++;
        size--;
    }
    return (y);
}

void	over_tri(t_a_stack **a_stack, t_b_stack **b_stack, int max)
{
	if (max > 2)
	{
		if (max == 4 || (max == 3 && lstsize(*a_stack) == 4))
		{
			reverse_rotate_a(a_stack);
			push_b(b_stack, a_stack);
		}
		else if (max == 3 && lstsize(*a_stack) == 5)
		{
			reverse_rotate_a(a_stack);
			reverse_rotate_a(a_stack);
			push_b(b_stack, a_stack);
		}
	}
}

void	lower_tri(t_a_stack **a_stack, t_b_stack **b_stack, int max)
{
	if (max < 2)
	{
		if (max == 0)
			push_b(b_stack, a_stack);
		if (max == 1)
		{
			swap_a(a_stack);
			push_b(b_stack, a_stack);
		}
	}
	if (max == 2)
	{
		rotate_a(a_stack);
		swap_a(a_stack);
		push_b(b_stack, a_stack);
	}
