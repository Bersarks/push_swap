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

int	array_min_index(int *arr, int size)
{
	int	x;
	int	y;
	int	count;
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
