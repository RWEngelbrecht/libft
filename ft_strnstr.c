/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rengelbr <rengelbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 10:08:20 by rengelbr          #+#    #+#             */
/*   Updated: 2019/05/30 10:08:21 by rengelbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *stack, const char *needle, size_t len)
{
	size_t	nd_len;
	int		last_res;

	last_res = 1;
	nd_len = ft_strlen(needle);
	if (nd_len == 0)
		return ((char *)stack);
	while (nd_len <= len && *stack != '\0' && (last_res = ft_strncmp(stack, needle, nd_len)))
	{
		len--;
		stack++;
	}
	if (last_res != 0)
		return (NULL);
	else
		return ((char *)stack);
}
