#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	while (*s != '\0')
	{
		f(s);
		s++;
	}
}

int main()
{
	char *str = "aaa";

	ft_striter(str, (char*)ft_bzero(str, sizeof(str)));
	printf("%s\n", str);

	return 0;
}