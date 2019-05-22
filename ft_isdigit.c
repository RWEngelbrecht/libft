#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int main()
{
	int i = 3;

	if (ft_isdigit(i))
		printf("var i is digit\n");
	else
		printf("var i is not digit\n");

	return 0;
}