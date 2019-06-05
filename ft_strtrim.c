/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rengelbr <rengelbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 09:53:14 by rengelbr          #+#    #+#             */
/*   Updated: 2019/06/05 11:50:29 by rengelbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s)
{
	char	*trimd;
	int		i;
	int		j;

	i = 0;
	j = ft_strlen(s) - 1;
	if (!s)
		return (NULL);
	while (ft_iswhitespace(s[i]))
	{
		i++;
		if (s[i] == '\0')
			return ("");
	}
	while (ft_iswhitespace(s[j]))
	{
		j--;
	}
	trimd = ft_strsub(s, i, (j - i) + 1);
	return (trimd);
}
