#include "libft.h"
#include <stdio.h>

void *ft_memchr(const void *s, int c, size_t n)
{
	size_t i;
	unsigned char *str;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		if ((unsigned char)c != str[i])
		{
			i++;
		}
		else if (str[i] == (unsigned char)c)
			return (str);
	}
	return (NULL);
}
