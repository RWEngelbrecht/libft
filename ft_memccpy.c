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

int main()
{
	//char *dest;
	//char *sauce;

	char dest[] = "QWERTY";
	char sauce[] = "ABCDEF";

	printf("dest = %s\n", dest);
	ft_memccpy(dest, sauce, 'D', 6);
	printf("dest = %s\n", dest);

	return (0);
}
