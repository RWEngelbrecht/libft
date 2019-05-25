#include "libft.h"
#include <stdio.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
		unsigned int i;

		char *d;
		char *s;

		d = (char *)dst;
		s = (char *)src;

		i = 0;
		while (i < n && s[i] != c)
		{
			d[i] = s[i];
			i++;
		}

		return (d);
}
