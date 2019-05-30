/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rengelbr <rengelbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 10:08:36 by rengelbr          #+#    #+#             */
/*   Updated: 2019/05/30 10:08:37 by rengelbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strstr(const char *stack, const char *needle)
{
	int		i;
	int		j;
	int		k;
	int		nd_len;
	char	*str;
	char	*ndl;

	i = 0;
	j = 0;
	k = 0;
	nd_len = ft_strlen(needle);
	str = (char*)stack;
	ndl = (char*)needle;
	if (nd_len == 0)
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == ndl[j])
		{
			k = i;
			while (nd_len > 0)
			{
				if (str[k] != ndl[j])
					return (NULL);
				k++;
				j++;
				nd_len--;
			}
			return(&str[i]);
		}
		else
			i++;
	}
	return (NULL);
}
