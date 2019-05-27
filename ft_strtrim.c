/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rengelbr <rengelbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 09:53:14 by rengelbr          #+#    #+#             */
/*   Updated: 2019/05/27 11:11:42 by rengelbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *  ft_strtrim(char const *s)
{
    char *trimd;
    int i;
    int j;
    int k;

    i = 0;
    j = ft_strlen(s);
    k = 0;
    while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
        i++;
    while (s[j] == ' ' || s[j] == '\n' || s[j] == '\t')
        j--;
    trimd = (char *)ft_memalloc(j - i + 1);
    while (i < j)
    {
            trimd[k] = s[i];
            i++;
            k++;
    }
    trimd[k] = '\0';
    return (trimd);
}
