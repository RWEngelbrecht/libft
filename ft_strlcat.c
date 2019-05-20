#include "libft.h"

size_t	char *dst, const char *src, size_t dstsize)
{
	dst = (char *)malloc(sizeof(char) * (dstsize - ft_strlen(dst) - 1));

	if (*dst < dstsize || dstsize == 0)
		return (NULL);
	
}