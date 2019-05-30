/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rengelbr <rengelbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 10:06:48 by rengelbr          #+#    #+#             */
/*   Updated: 2019/05/30 15:07:13 by rengelbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int i;
	int neg;
	int n;

	i = 0;
	neg = 0;
	n = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if ()
	if (str[i] == '-')
	{
		neg = 1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		n *= 10;
		n += str[i] - '0';
		i++;
	}
	if (neg == 1)
		return (-n);
	else
		return (n);
}
