#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char *temp;
	size_t i;
	size_t j;

	temp = (char *)malloc(sizeof(char) * ((ft_strlen(s1) + ft_strlen(s2) + 1)));
	i = 0;
	j = 0;
	while (s1[j] != '\0')
	{
		temp[i] = s1[j];
		i++;
		j++;
	}
	j = 0;
	while (s2[j] != '\0' && j < n)
	{
		temp[i] = s2[j];
		i++;
		j++;
	}
	temp[i] = '\0';
	s1 = temp;

	return (s1);
}

int main()
{
	char dst[] = "fish";
	char src[] = "water";
	char *res = NULL;

	res = ft_strncat(dst, src, 1);
	printf("res is %s\n", res);

	return 0;
}