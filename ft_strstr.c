#include "libft.h"

char *ft_strstr(const char *stack, const char *needle)
{
	int		i;
	int		j;
	int		k;
	int		nd_len;
	char	*str;
	char	*ndl;

	i = 0;
	j = 0;
	k = 0;
	nd_len = ft_strlen(needle);
	str = (char*)stack;
	ndl = (char*)needle;
	if (nd_len == 0)
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == ndl[j])
		{
			k = i;
			while (nd_len > 0)
			{
				if (str[k] != ndl[j])
					return (NULL);
				k++;
				j++;
				nd_len--;
			}
			return(&str[i]);
		}
		else
			i++;
	}
	return (NULL);
}

int main()
{
	char strn[] = "haystackss";
	char ndl[] = "";

	printf("%s\n", ft_strstr(strn, ndl));

	return (0);
}