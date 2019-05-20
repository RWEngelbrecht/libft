#include "libft.h"
#include <stdio.h>

char	*ft_strcat(char *s1, const char *s2)
{
	char *temp;
	int i;
	int j;

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
	while (s2[j] != '\0')
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
	char s1[] = "birds";
	char s2[] = "words";
	char *res = NULL;

	printf("src is %s, dest is %s\n", s2, s1);
	res = ft_strcat(s1, s2);
	printf("catted to: %s \n", res);

	return (0);
}