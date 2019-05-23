#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *str;

	str = (char*)ft_memalloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	ft_bzero(str, size + 1);
	return (str);
}

int main()
{
	char *s = ft_strnew(5);

	printf("%s\n", s);

	return 0;
}