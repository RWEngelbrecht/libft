/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rengelbr <rengelbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 10:08:20 by rengelbr          #+#    #+#             */
/*   Updated: 2019/05/30 13:26:19 by rengelbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *stack, const char *needle, size_t len)
{
	size_t	nd_len;
	size_t	i;

	nd_len = ft_strlen(needle);
	i = 0;
	if (nd_len == 0 || needle == stack)
		return ((char *)stack);
	while (len > 0 && stack[i] != '\0')
	{
		if (!(ft_strncmp((stack + i), needle, nd_len)) && (len > (len - i)))
			return ((char*)ft_strstr(stack, needle));
		len--;
		i++;
	}
	return (NULL);
}
