/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rengelbr <rengelbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 11:10:26 by rengelbr          #+#    #+#             */
/*   Updated: 2019/05/28 11:10:30 by rengelbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned int i;
	unsigned char *temp;

	i = 0;
	if (str != NULL && n > 0)
	{
		temp = str;
		while (i < n)
		{
			*temp = (unsigned char)c;
			temp++;
			i++;
		}
	}
	return (0);
}
