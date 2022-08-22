#include "../Lib/push_swap.h"

int	main(int ac, char **av)
{
	t_a_stack	*a_node;
	//t_b_stack	*b_node;

	a_node = NULL;
	//b_node = NULL;
	control_processor(&a_node, av, ac);
	if (lstsize(a_node) == 3)
		sort_trion(&a_node, lstsize(a_node));
	if (lstsize(a_node) <= 5)
	 	kvintett(&a_node);
	while (a_node)
	{
		printf("Value: %d ", a_node->value);
		printf("Index: %d\n", a_node->index);
		a_node = a_node->next;
	}
	printf("\n");
}
