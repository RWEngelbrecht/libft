/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rengelbr <rengelbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 14:26:04 by rengelbr          #+#    #+#             */
/*   Updated: 2019/05/28 14:26:07 by rengelbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
		unsigned int i;

		char *d;
		char *s;

		d = (char *)dst;
		s = (char *)src;

		i = 0;
		while (i < n && s[i] != c)
		{
			d[i] = s[i];
			i++;
		}

		return (d);
}
