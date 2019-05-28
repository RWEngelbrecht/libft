/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rengelbr <rengelbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 12:54:24 by rengelbr          #+#    #+#             */
/*   Updated: 2019/05/28 14:23:14 by rengelbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
		size_t		i;
		char		*d;
		const char	*s;

		d = dst;
		s = src;
		i = 0;
		if (dst == NULL && src == NULL && !(n <= 0))
			return (NULL);
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
		return (dst);
}
