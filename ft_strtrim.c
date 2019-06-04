/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rengelbr <rengelbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 09:53:14 by rengelbr          #+#    #+#             */
/*   Updated: 2019/06/04 15:40:42 by rengelbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

-

char	*ft_strtrim(char const *s)
{
	char	*trimd;
	int		i;
	int		j;
	int		k;

	//i = 0;
	//j = ft_strlen(s + 1);
	i = skip_whitespace(s, 0);
	j = skip_whitespace(s, ft_strlen(s + 1));
	k = 0;
	if (!s)
		return (NULL);
	if (i == 0 || j == 0)
	{
		trimd = ft_strnew(ft_strlen(s) + 1);
		return (ft_strcpy(trimd, s));
	}
	/*
	if (ft_iswhitespace(s[i]) || ft_iswhitespace(s[j]))
	{
		while (ft_iswhitespace(s[i]))
			i++;
		while (ft_iswhitespace(s[j]))
			j--;
	}
	else
	{
		trimd = ft_strnew(j) + 1;
		return (ft_strcpy(trimd, s));
	}
	*/
	else
	{
		trimd = ft_strnew((j - i) + 1);
		if (!trimd)
			return (0);
		while (i <= j)
			trimd[k++] = s[i++];
		trimd[k] = '\0';
	}
	return (trimd);
}
