#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t i;
	char *d;
	char *s;

	i = 0;
	d = (char *)dst;
	s = (char *)src;
	if (s > d)
	{
		while (i < len)
		{
			if (d[i] != s[i])
			{
				d[i] = s[i];
			}
			i++;
		}
	}
	else
		i = len - 1;
		s = s + len - 1;
		d = d + len - 1;
		while (i > 0)
		{
			if (d[i] != s[i])
			{
				d[i] = s[i];
			}
			i--;
		}
		return (dst);
}
/*
int main()
{
	char sauce[] = "ToeRE";
	char dest[] = "ToHere";

	printf("dest = %s\n", dest);
	ft_memmove(dest, sauce, 6);
	printf("dest = %s\n", dest);

	return 0;
}*/
