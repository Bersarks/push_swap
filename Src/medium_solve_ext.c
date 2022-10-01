#include "../Lib/push_swap.h"

static void	swap(int *x, int *y)
{
	int	c;

	c = *x;
	*x = *y;
	*y = c;
}

static void	bubbleSort(int number[], int first, int last)
{
	int	i;
	int	j;

	i = first;
	while (i <= last)
	{
		j = i + 1;
		while (j <= last)
		{
			if (number[i] > number[j])
				swap(&number[i], &number[j]);
			j++;
		}
		i++;
	}
}

t_stack	*index_sort(t_stack *a_stack)
{
	int		i;
	int		*index;
	t_stack	*tmp;

	index = array_creator(a_stack);
	bubbleSort(index, 0, lstsize(a_stack) - 1);
	tmp = a_stack;
	while (tmp)
	{
		i = 0;
		while (tmp->value != index[i])
			i++;
		tmp->index = i;
		tmp = tmp->next;
	}
	free(index);
	return (a_stack);
}
