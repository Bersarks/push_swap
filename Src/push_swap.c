#include "../Lib/push_swap.h"

int	main(int argc, char **argv)
{
	int			index;
	t_a_stack	*a_node;
	t_b_stack	*b_node;
	t_stack		*a_tmp;
	t_stack		*b_tmp;

	index = argc - 1;
	a_node = NULL;
	b_node = NULL;
	while (index)
	{
		lstadd_back(&a_node, lstnew(ft_atoi(argv[argc - index])));
		lstadd_back(&b_node, lstnew(ft_atoi(argv[argc - index] + 1)));
		index--;
	}
	while (a_node)
	{
		printf("%d\n", a_node->value);
		a_node = a_node->next;
	}
	
}