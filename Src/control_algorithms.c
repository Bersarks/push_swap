#include "../Lib/push_swap.h"

int	in_line(t_stack *source, int count)
{
	int	temp;
	int	temp_2;

	temp = 1;
	temp_2 = count - 1;
	while (count && source->next)
	{
		if (source->value < source->next->value)
			temp++;
		source = source->next;
		count--;
	}
	if (temp == temp_2)
		exit(EXIT_SUCCESS);
	return (1);
}

int	duplicate_arguments(t_stack *source)
{
	t_stack	*temp;
	int		counter;

	while (source)
	{
		counter = 0;
		temp = source->next;
		while (temp)
		{
			if (temp->value == source->value)
				counter++;
			temp = temp->next;
		}
		if (counter >= 1)
			error_message("There are repeated arguments!\n");
		source = source->next;
	}
	free(temp);
	return (1);
}

int	content_control(char **content)
{
	int	x;
	int	y;

	y = 1;
	while(content[y])
	{
		x = 0;
		while (content[y][x])
		{
			if (content[y][x] == ' ')
				x++;
			else if (!(content[y][x] >= '0' && content[y][x] <= '9'))
				error_message("There are foreign characters!\n");
			x++;
		}
		y++;
	}
	return (1);
}
