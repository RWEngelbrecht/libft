/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rengelbr <rengelbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 12:00:05 by rengelbr          #+#    #+#             */
/*   Updated: 2019/05/27 14:22:42 by rengelbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     get_len(char const *str, char c)
{
    int     len;
    int     i;

    len = 0;
    i = 0;
    while (str[i] == c)
        i++;
    while (str[i] != c && str[i] != '\0')
    {
        i++;
        len++;
    }
    return (len);
}

int     word_count(char const *str, char c)
{
    int     count;
    int     i;

    count = 0;
    i = 0;
    while (*str)
    {
        while (str[i] == c)
            i++;
        if (str[i] != c && str[i] != '\0')
            count++;
        while (str[i] != c && str[i] != '\0')
            i++;
    }
    return (count);
}

char    **ft_strsplit(char const *s, char c)
{
    int     i;
    int     j;
    int     k;
    int     n;
    char    **arr;

    i = 0;
    j = 0;
    n = word_count(s, c);
    if (!s || !(arr = (char **)malloc(sizeof(*arr) * (word_count(s, c) + 1))))
        return (NULL);
    while (i < n)
    {
        k = 0;
        while (s[j] == c)
            j++;
        while (s[j] != c && s[j] != '\0')
        {
            arr[i][k] = s[j];
            k++;
            j++;
        }
        arr[i][k] = '\0';
        i++;
    }
    return (arr);
}

/*char ** ft_strsplit(char const *s, char c)
{
    char    **arr;
    int     i;
    int     n;
    int     j;
    int     k;

    i = 0;
    n = 0;
    j = 0;
    k = 0;
    while (*s)
    {
        if (s[i] == c)
            i++;
        else
        {
            while (s[i] != c)
            {
                if (s[i] == c)
                {
                    *arr[n] = (char *)ft_memalloc(j + 1);
                    n++;
                    j = 0;
                }
                i++;
                j++;
            }
        }
    }
    return (**arr);
}*/
