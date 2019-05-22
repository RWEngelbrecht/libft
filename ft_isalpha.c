#include "libft.h"

int	ft_isalpha(int c)
{
	if (ft_islower(c) || ft_isupper(c))
		return (1);
	else
		return (0);
}

int main()
{
	int s = '4';

	if (ft_isalpha(s))
		printf("var %c is alpha\n", s);
	else
		printf("var %c is not alpha\n", s);

	return 0;
}