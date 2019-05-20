#include "libft.h"
#include <stdio.h>

void *ft_memchr(const void *s, int c, size_t n)
{
	size_t i;
	unsigned char *str;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		if ((unsigned char)c != str[i])
		{
			i++;
		}
		else if (str[i] == (unsigned char)c)
			return (str);
	}
	return (NULL);
}

int main()
{
	char str[] = "Farts";
	char letter = 'q';

	printf("Is the letter %c in the string %s?\n", letter, str);
	if ((ft_memchr(str, letter,  5)) != NULL)
	{
		printf("YES\n");
	}
	else
		printf("NO\n");

	return 0;
}