#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	else
		return (0);
}

int main()
{
	int i = ' ';

	if (ft_isalnum(i))
		printf("i is alphanum\n");
	else
		printf("i is not alphanum\n");

	return (0);
}