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

int	array_max_val(int *arr)
{
	int	x;
	int	y;
	int	count;

	y = 0;
	count = 0;
	while (arr[y])
	{
		x = 0;
		count = 0;
		while (arr[x])
		{
			if (arr[y] > arr[x])
				count++;
			x++;
		}
		if (count == 4)
			return (y);
		y++;
	}
	return (y);
}
