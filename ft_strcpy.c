#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

int main()
{
	char s1[] = "";
	char s2[] = "this is sparta";

	printf("src is %s, dest is %s\n", s2, s1);
	ft_strcpy(s1, s2);
	printf("src is %s, dest is %s\n", s2, s1);

	return (0);
}