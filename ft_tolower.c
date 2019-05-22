#include "libft.h"

int ft_tolower(int c)
{
	if (ft_isalpha(c))
	{
		if (c >= 97 && c <= 122)
			return (c);
		else
			return (c + 32);
	}
	else
		return (c);
}

int main()
{
	int i = 'Z';

	printf("var i is %c\n", i);
	printf("var i is %c\n", ft_tolower(i));

	return 0;
}
