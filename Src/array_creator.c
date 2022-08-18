#include "../Lib/push_swap.h"

int	*array_creator(t_a_stack *a_stack)
{
	int	*arr;
	int	index;

	arr = calloc(sizeof(int), lstsize(a_stack));
	index = 0;
	while (a_stack)
	{
		arr[index++] = a_stack->value;
		a_stack = a_stack->next;
	}
	return (arr);
}
