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
		lstadd_back(&b_node, lstnew(ft_atoi(argv[argc - index])));
		index--;
	}
	//swap(a_node);
	//swap_ab(a_node, b_node);
	//push(&b_node, &a_node);
	//rotate_ab(&a_node, &b_node);
	reverse_rotate(&a_node);
	a_tmp = a_node;
	b_tmp = b_node;
	while (a_tmp)
	{
		printf("%d ", a_tmp->value);
		a_tmp = a_tmp->next;
	}
	printf("\n");
	while (b_tmp)
	{
		printf("%d ", b_tmp->value);
		b_tmp = b_tmp->next;
	}
}
