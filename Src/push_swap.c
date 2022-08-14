#include "../Lib/push_swap.h"

int	main(int argc, char **argv)
{
	int			index;
	t_a_stack	*a_node;
	t_b_stack	*b_node;

	index = argc - 1;
	a_node = NULL;
	b_node = NULL;
	while (index)
	{
		lstadd_back(&a_node, lstnew(ft_atoi(argv[argc - index])));
		lstadd_back(&b_node, lstnew(ft_atoi(argv[argc - index])));
		a_node->count++;
		index--;
	}
	if(content_control(argv) && in_line(a_node, argc) && duplicate_arguments(a_node))
	{
		while (a_node)
		{
			printf("%d ", a_node->value);
			a_node = a_node->next;
		}
		printf("\n");
		while (b_node)
		{
			printf("%d ", b_node->value);
			b_node = b_node->next;
		}
	}
}
