/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rengelbr <rengelbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 15:17:59 by rengelbr          #+#    #+#             */
/*   Updated: 2019/06/03 13:24:17 by rengelbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_countchars(int n)
{
	int		cnt;

	cnt = 0;
	if (n == 0)
		cnt++;
	else if (n < 0)
	{
		cnt++;
		while (n < 0)
		{
			cnt++;
			n /= 10;
		}
	}
	else
	{
		while (n > 0)
		{
			cnt++;
			n /= 10;
		}
	}
	return (cnt);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		neg;

	str = ft_strnew(ft_countchars(n));
	i = 0;
	neg = 0;
	if (n == 0)
		str[i++] = '0';
	if (n < 0)
	{
		neg = 1;
		n = -n;
	}
	while (n > 0)
	{
		str[i++] = n % 10 + '0';
		n /= 10;
	}
	if (neg == 1)
		str[i++] = '-';
	str[i] = '\0';
	ft_strrev(str);
	return (str);
}
