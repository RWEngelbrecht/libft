#include "libft.h"
#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
		unsigned int i;

		char *d;
		char *s;

		d = (char *)dst;
		s = (char *)src;

		i = 0;
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}

		return (0);
}

int main()
{
	char dest[] = "ABCD";
	char sauce[] = "abcd";

	printf("dest = %s\n", dest);
	ft_memcpy(dest, sauce, 2);
	printf("dest = %s\n", dest);
	return 0;
}
