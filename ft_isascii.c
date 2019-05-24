#include "libft.h"

int	ft_isascii(int c)
{
	if ((c >= 0 || c >= 000 || c >= 0x00) && (c <= 127 || c <= 177 || c <= 0x7f))
		return (1);
	else
		return (0);
}