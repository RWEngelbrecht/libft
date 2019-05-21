#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	int		i ;

	i = (int)ft_strlen(s) + 1;
	while (i > 0)
	{
		if (*(s + i) == (char)c)
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}

int main()
{
	char str[] = "worodos";

	printf("%s\n", ft_strrchr(str, 'o'));

	return 0;
}