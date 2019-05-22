#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

int main()
{
	int i = '\0';

	if (ft_isprint(i))
		printf("i is printable\n");
	else
		printf("i is not printable\n");
	return 0;
}