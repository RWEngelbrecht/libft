#include "libft.h"

int	ft_atoi(const char *str)
{
	int i;
	int neg;
	int n;

	i = 0;
	neg = 0;
	n = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if (str[i] == '-')
		neg = 1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (*str && (str[i] >= '0' && str[i] <= '9'))
	{
		n = n * 10 + (str[i] - '0');
		i++;
	}
	if (neg == 1)
		return (-n);
	else
		return (n);
}
