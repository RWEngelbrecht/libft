#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char) *s2);
	/*int i;
	int res;

	i = 0;
	res = 0;
	while (s1[i] != '\0')
	{

		res += s1[i];
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		res -= s2[i];
		i++;
	}
	return (res);
	*/
}