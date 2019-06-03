/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rengelbr <rengelbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 12:00:05 by rengelbr          #+#    #+#             */
/*   Updated: 2019/06/03 09:39:08 by rengelbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int     ft_wordcount(char const *str, char c)
{
    int     count;
    int     i;

    count = 0;
    i = 0;
    while (str[i] != '\0')
    {
        while (str[i] == c)
            i++;
        if (str[i] != c && str[i] != '\0')
        {
            count++;
            i++;
            while (str[i] != c && str[i] != '\0')
                i++;
        }
    }
    return (count);
}

static char     **ft_split(char const *s, char c, char **arr)
{
    int     l;
    int     start;
    int     i;

    l = 0;
    start = 0;
    i = 0;
    while (s[l] != '\0')
    {
        if (s[l] != c)
        {
            start = l;
            while (s[l] != c && s[l])
                l++;
            arr[i++] = ft_strsub(s, start, (l - start));
        }
        else
            while (s[l] == c && s[l])
                l++;
        arr[i] = NULL;
    }
    return (arr);
}

char    **ft_strsplit(char const *s, char c)
{
    char    **arr;

    if (!s)
    {
        if (c != ' ')
        {
            if (!(arr = (char **)malloc(sizeof(char *))))
                return (NULL);
            arr[0] = NULL;
            return (arr);
        }
    }
    else if (!c)
    {
        return ((char **)ft_strdup(s));
    }
    if (!(arr = (char **)malloc(sizeof(*arr) * ft_wordcount(s, c) + 1)))
        return (NULL);
    arr = ft_split(s, c, arr);
    return (arr);
}
