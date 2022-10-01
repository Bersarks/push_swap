#include "../Lib/push_swap.h"

int	ft_atoi(const char *str)
{
	int				a;
	int				b;
	long			c;

	a = 0;
	b = 1;
	c = 0;
	while (str[a] == ' ' || str[a] == '\n' || str[a] == '\t'
		|| str[a] == '\v' || str[a] == '\f' || str[a] == '\r')
		a++;
	if (str[a] == '+' || str[a] == '-')
	{
		if (str[a] == '-')
			b = -1;
		a++;
	}
	while (str[a] >= '0' && str[a] <= '9')
	{
		c = (c * 10) + (str[a] - '0');
		a++;
	}
	if (c * b > 2147483647 || c * b < -2147483648) //(fix) Data overflow control
		error_message("The value entered is outside the integer value!\n");
	return (c * b);
}
