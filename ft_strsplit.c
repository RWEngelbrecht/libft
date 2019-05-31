/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rengelbr <rengelbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 12:00:05 by rengelbr          #+#    #+#             */
/*   Updated: 2019/05/31 15:39:44 by rigardtengelbrecht###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
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
*/
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

void    ft_malloc2d(char ***arr, int n, int m)
{
    int i;

    i = 0;
    *arr = (char **)malloc(sizeof(char*) * n)
    while (i < n)
    {
        (*arr)[i] = (char*)malloc(sizeof(char) * m)
        i++;
    }
}

char    **ft_strsplit(char const *s, char c)
{
    int     i;
    int     n;
    int     j;
    //int     k;
    char    **arr;

    i = 0;
    n = 0;
    j = 0;
    //k = 0;
    *arr = (char**)malloc(sizeof(char*) * word_count(s, c));
    while (*s)
    {
        
        while (s[i] == c)
            i++;
        while (s[i] != c)
        {
            arr[n][j] = s[i];
            i++;
            j++;
        }
        //n++;
    }
    return (arr);
}
/*
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
*/
