/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rengelbr <rengelbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 09:13:35 by rengelbr          #+#    #+#             */
/*   Updated: 2019/05/28 14:03:31 by rengelbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"



char * ft_strjoin(char const *s1, char const *s2)
{
    char *str;
    int i;
    int j;

    //str = ft_strcat(s1, s2);
    str = malloc((ft_strlen(s1) + ft_strlen(s2)) + 1);
    i = 0;
    j = 0;
    if (!str)
        return (NULL);
    ft_strcpy(str, s1);
    ft_strcat(str, s2);
    /*while (s1[i] != '\0')
    {
        str[i] = s1[i];
        i++;
    }
    while (s2[j] != '\0')
    {
        str[i] = s2[j];
        i++;
        j++;
    }*/
    //str[i] = '\0';
    if (!str)
        return (NULL);
    else
        return (str);
}
