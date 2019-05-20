#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char *tmp;

	tmp = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (tmp == NULL)
		return (NULL);
	else
		return (ft_strcpy(tmp, s1));
}

int main()
{
	char *s1 = NULL;
	char s2[] = "words are all i need";

	printf("src is %s, dest is %s\n", s2, s1);
	s1 = ft_strdup(s2);
	printf("src is %s, dest is %s\n", s2, s1);

	return (0);
}