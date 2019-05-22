#include "libft.h"

char *ft_strnstr(const char *stack, const char *needle, size_t len)
{
	size_t	nd_len;
	int		last_res;

	last_res = 1;
	nd_len = ft_strlen(needle);
	if (nd_len == 0)
		return ((char *)stack);
	while (nd_len <= len && *stack != '\0' && (last_res = ft_strncmp(stack, needle, nd_len)))
	{
		len--;
		stack++;
	}
		/*if (str[i] == ndl[j])
		{
			k = i;
			while (len > 0)
			{
				if ()
					
			}
			while (nd_len <= len)
			{
				if (str[k] != ndl[j])
					return (NULL);
				k++;
				j++;
				nd_len--;
				len--;
			}
			return(&str[i]);
		}*/
	if (last_res != 0)
		return (NULL);
	else
		return ((char *)stack);
}

int main()
{
	char strn[] = "haystackss";
	char ndl[] = "sta";

	printf("%s\n", ft_strnstr(strn, ndl, 6));

	return (0);
}