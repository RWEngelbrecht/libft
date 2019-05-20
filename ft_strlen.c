#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

int main()
{
	char str[] = "word";

	printf("%zu\n", ft_strlen(str));

	return 0;
}
