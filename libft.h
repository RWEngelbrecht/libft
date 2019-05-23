#ifndef _LIBFT_H_
# define _LIBFT_H_

# include <unistd.h>
# include <libc.h>
# include <string.h>
# include <ctype.h>

char	*ft_strcpy(char *dst, const char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

void	ft_putchar(char c);

void	ft_putstr(char *str);

size_t	ft_strlen(const char *s)
{
		int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

void	*ft_memset(void *str, int c, size_t n)
{
	size_t i;
	unsigned char *temp;

	i = 0;
	if (str != NULL && n > 0)
	{
		temp = str;
		while (i < n)
		{
			*temp = (unsigned char)c;
			temp++;
			i++;
		}
	}
	return (0);
}

void	ft_bzero(void *s, size_t n)
{
	unsigned char *temp;
	size_t i;

	i = 0;
	temp = NULL;
	*temp = (unsigned char)s;
	if (n > 0)
	{
		while (i < n)
			ft_memset(temp, 0, n);
	}
}

int		ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char) *s2);
}

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n > 0 && *s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	else
		return ((unsigned char)*s1 - (unsigned char) *s2);
}

int	ft_isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

int ft_islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int	ft_isalpha(int c)
{
	if (ft_islower(c) || ft_isupper(c))
		return (1);
	else
		return (0);
}

void	*ft_memalloc(size_t size)
{
	void	*mem;

	mem = malloc(size);
	if (!mem)
		return (NULL);
	ft_bzero(mem, size);
	return (mem);
}

char	*ft_strnew(size_t size);

typedef struct		s_list
{

	void		*content;
	size_t		content_size;
	struct s_list	*next;
}			t_list;

#endif
