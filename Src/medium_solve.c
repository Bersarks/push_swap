#include "../Lib/push_swap.h"

static int	b_control(t_stack *a_stack, int swipe)
{
	t_stack	*tmp;

	tmp = a_stack;
	while (tmp)
	{
		if ((tmp->index) >> swipe & 1)
			return (1);
		tmp = tmp->next;
	}
	return (0);
}

static int	r_push(t_stack **a_stack, t_stack **b_stack, int swipe)
{
	int	i;

	i = lstsize(*b_stack);
	if (!(i))
		return (0);
	while (i--)
	{
		if (((*b_stack)->index >> swipe) & 1)
			push_a(a_stack, b_stack);
		else
			rotate_b(b_stack, 0);
	}
	return (1);
}

static int	issorted(t_stack *a, t_stack *b)
{
	int		index;
	t_stack	*tmp;

	tmp = a;
	index = a->index;
	while (tmp)
	{
		if (index > tmp->index)
			return (1);
		index = tmp->index;
		tmp = tmp->next;
	}
	if (!b)
		return (0);
	tmp = b;
	index = b->index;
	while (tmp)
	{
		if (index < tmp->index)
			return (1);
		tmp = tmp->next;
	}
	return (0);
}

void	radix_sort(t_stack **a, t_stack **b)
{
	int		i;
	int		swipe;

	swipe = 0;
	while (1)
	{
		i = lstsize(*a);
		while (i--)
		{
			if (((*a)->index) >> swipe & 1)
				rotate_a(a, 0);
			else
			{
				push_b(b, a);
				continue ;
			}
			if (!issorted(*a, *b))
				break ;
		}
		swipe++;
		if (!issorted(*a, *b) || !b_control(*a, swipe) || !r_push(a, b, swipe))
			break ;
	}
	while ((*b))
		push_a(a, b);
}
