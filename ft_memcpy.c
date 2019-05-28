/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rengelbr <rengelbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 12:54:24 by rengelbr          #+#    #+#             */
/*   Updated: 2019/05/28 12:54:28 by rengelbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
		size_t i;

		char *d;
		char *s;

		d = (char *)dst;
		s = (char *)src;
		i = 0;
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
		return (0);
}
