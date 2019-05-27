/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rengelbr <rengelbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 15:17:59 by rengelbr          #+#    #+#             */
/*   Updated: 2019/05/27 17:37:04 by rengelbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char *ft_strrev(char *s)
{
    size_t n;
    size_t size;
    size_t half;
    size_t size2;
    char str;

    n = 0;
    size = ft_strlen(s);
    half = size / 2;
    if (s)
    {
        while (n < half)
        {
            size2 = size - n - 1;
            str = s[n];
            s[n] = s[size2];
            s[size2] = str;
            n++;
        }
    }
    return (s);
}

char    *ft_itoa(int n)
{
    char    *str;
    int     i;
    int     neg;

    str = ft_strnew();
    i = 0;
    neg = 0;
    if (n == 0)
    {
        str[i++] = '0';
        str[i] = '\0';
        return (str);
    }
    if (n < 0)
        neg = 1;
    while (n)
    {
        str[i++] = (n % 10) + '0';
        n /= 10;
    }
    if (neg == 1)
        str[i++] = '-';
    str[i] = '\0';
    ft_strrev(str);
    return (str);
}
