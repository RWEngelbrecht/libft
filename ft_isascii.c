#include "libft.h"

int	ft_isascii(int c)
{
	if ((c >= 0 || c >= 000 || c >= 0x00) && (c <= 127 || c <= 177 || c <= 0x7f))
		return (1);
	else
		return (0);
}

int main()
{
	int i = 0x5c;

	if (ft_isascii(i))
		printf("i is ascii\n");
	else
		printf("i is not ascii\n");
	return 0;
}