#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char *temp;
	size_t i;

	i = 0;
	temp = NULL;
	*temp = (unsigned char)s;
	if (n > 0)
	{
		while (i < n)
		{
//			temp[i] = 0;
//			temp++;
//			i++;
			ft_memset(temp, 0, n);		
		}
		
	}
}