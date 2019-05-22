#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

int main()
{
	int i = ' ';

	if (ft_isascii(i))
		printf("i is ascii\n");
	else
		printf("i is not ascii\n");
	return 0;
}