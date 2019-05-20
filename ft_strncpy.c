#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t i;

	i = 0;
	while (src[i] != '\0' && i < len)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

int main()
{
	char s1[] = "vus";
	char s2[] = "wor  ds are all i feed      .";

	printf("src is %s, dest is %s\n", s2, s1);
	ft_strncpy(s1, s2, 8);
	printf("src is %s, dest is %s\n", s2, s1);

	return (0);
}