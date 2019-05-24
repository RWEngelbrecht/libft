#include "libft.h"

int ft_toupper(int c)
{
	if (ft_isalpha(c))
	{
		if (c >= 65 && c <= 90)
			return (c);
		else
			return (c - 32);
	}
	else
		return (c);
}