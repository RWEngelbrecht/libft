/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rengelbr <rengelbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 13:53:02 by rengelbr          #+#    #+#             */
/*   Updated: 2019/06/03 16:50:44 by rengelbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	str = ft_strnew(len);
	i = 0;
	s = s + start;
	if (!str)
		return (NULL);
	if (s)
	{
		while (i < len)
		{
			str[i] = s[i];
			i++;
		}
	}
	return (str);
}
