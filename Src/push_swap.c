#include "../Lib/push_swap.h"

int	main(int argc, char **argv)
{
	int			x;
	char		**content;
	t_a_stack	*a_node;
	t_b_stack	*b_node;

	a_node = NULL;
	b_node = NULL;
	x = 0;
	if (argc == 2)
	{
		content = ft_split(argv[1], ' ');
		if(content_control(content) && duplicate_arguments(content))
		{
			while (content[x])
			{
				lstadd_back(&a_node, lstnew(ft_atoi(content[x])));
				lstadd_back(&b_node, lstnew(ft_atoi(content[x])));
				a_node->count++;
				x++;
			}
			in_line(a_node, a_node->count);
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
	else if (argc > 2)
	{
		if(content_control(argv) && duplicate_arguments(argv) && in_line(a_node, argc))
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
}
