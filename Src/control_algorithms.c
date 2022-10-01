#include "../Lib/push_swap.h"

int	in_line(t_stack *source, int count, int options)
{
	int	counter_0;
	int	counter_1;

	counter_0 = count;
	counter_1 = 1;
	while (count && source->next)
	{
		if (source->value < source->next->value)
			counter_1++;
		source = source->next;
		count--;
	}
	if (counter_1 == counter_0 && options == 0)
		return (0);
	if (counter_1 == 5 && options == 1)
		return (0);
	return (1);
}

int	duplicate_arguments(char **content)
{
	int	x;
	int	y;

	y = 1;
	while (content[y])
	{
		x = y + 1;
		while (content[x])
		{
			if (ft_strcmp(content[y], content[x]) == 0)
				error_message("There are repeated arguments!\n");
			else
				x++;
		}
		y++;
	}
	return (1);
}

int	content_control(char **content)
{
	int	x;
	int	y;

	y = 1;
	while (content[y])
	{
		x = 0;
		while (content[y][x])
		{
			if (content[y][x] == ' ')
				x++;
			if (!((content[y][x] >= '0' && content[y][x] <= '9')
				|| (content[y][x] == '-' && content[y][x + 1] >= '0'
					&& content[y][x + 1] <= '9')))
				error_message("There are foreign characters!\n");
			x++;
		}
		y++;
	}
	return (1);
}
