#include "../Lib/push_swap.h"

void	error_message(const char *error_message)
{
	write(1, "Error\n", 6);
	write(1, error_message, ft_strlen(error_message));
	exit(EXIT_SUCCESS);
}
