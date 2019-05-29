/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rengelbr <rengelbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 13:30:38 by rengelbr          #+#    #+#             */
/*   Updated: 2019/05/29 13:30:41 by rengelbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *str1;
	unsigned char *str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;

	while (*str1 == *str2 && n > 0)
	{
		printf("Checking similarity.\n");
		str1++;
		str2++;
		n--;
	}
	if (n == 0)
	{
		return (0);
	}
	else
		printf("Val the same.\n");
		return (*str1 - *str2);
}
