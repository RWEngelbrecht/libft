/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rengelbr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 12:24:17 by rengelbr          #+#    #+#             */
/*   Updated: 2019/06/04 13:05:54 by rengelbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <ctype.h>
# include <unistd.h>

char	*ft_strcpy(char *dst, const char *src);
char	*ft_strncpy(char *dst, const char *src, size_t len);
void	ft_putchar(char c);
void	ft_putstr(char const *s);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putchar_fd(char c, int fd);
size_t	ft_strlen(const char *s);
char	*ft_strcat(char *s1, const char *s2);
void	*ft_memset(void *str, int c, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	ft_bzero(void *s, size_t n);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_isupper(int c);
int		ft_islower(int c);
int		ft_isdigit(int c);
int		ft_isalpha(int c);
int		ft_iswhitespace(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
void	*ft_memalloc(size_t size);
void	ft_memdel(void **ap);
char	*ft_strnew(size_t size);
char	*ft_strsub(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
int		ft_isalnum(int c);
char	*ft_strtrim(char const *s);
char	**ft_strsplit(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strrev(char *s);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strstr(const char *stack, const char *needle);
char	*ft_strdup(const char *s1);

#endif
