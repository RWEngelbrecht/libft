#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n > 0 && *s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	else
		return ((unsigned char)*s1 - (unsigned char) *s2);
}

int main()
{
	char str1[] = "word";
	char str2[] = "q";

	printf("%d\n", ft_strncmp(str1, str2, 1));

	return 0;
}