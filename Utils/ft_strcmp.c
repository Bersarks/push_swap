#include "../Lib/push_swap.h"

int ft_strcmp(const char *s1, const char *s2)
{
	size_t  a;

	a = 0;
	while (s1[a] == s2[a] && s1[a] != '\0')
		a++;

	return ((unsigned char)(s1[a]) - (unsigned char)(s2[a]));
}