#ifndef _LIBFT_H_
# define _LIBFT_H_

# include <unistd.h>		//REMOVE
# include <libc.h>			//REMOVE
# include <string.h>
# include <ctype.h>

char	*ft_strcpy(char *dst, const char *src);

void	ft_putchar(char c);

void	ft_putstr(char *str);

size_t	ft_strlen(const char *s);

void	*ft_memset(void *str, int c, size_t n);

void	ft_bzero(void *s, size_t n);

int		ft_strcmp(const char *s1, const char *s2);

int		ft_strncmp(const char *s1, const char *s2, size_t n);

int		ft_isupper(int c);

int 	ft_islower(int c);

int		ft_isdigit(int c);

int		ft_isalpha(int c);

int		ft_toupper(int c);

int		ft_tolower(int c);

void	*ft_memalloc(size_t size);

void	ft_memdel(void **ap);

char	*ft_strnew(size_t size);

char *  ft_strsub(char const *s, unsigned int start, size_t len);

char * ft_strjoin(char const *s1, char const *s2);

int	ft_isalnum(int c);

char *  ft_strtrim(char const *s);

char    **ft_strsplit(char const *s, char c);

char    *ft_itoa(int n);

typedef struct		s_list
{

	void		*content;
	size_t		content_size;
	struct s_list	*next;
}			t_list;

#endif
