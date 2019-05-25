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
