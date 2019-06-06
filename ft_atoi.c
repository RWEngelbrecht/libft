/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rengelbr <rengelbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 10:06:48 by rengelbr          #+#    #+#             */
/*   Updated: 2019/06/03 13:00:26 by rengelbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int i;
	int neg;
	int n;

	i = 0;
	neg = 0;
	n = 0;
	if ((*str - '0') <= -2147483647)
		return (n);
	if (*str - '0' >= 2147483647)
		return (n - 1);
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if (str[i] == '-')
	{
		neg = 1;
		i++;
	}
	while (ft_isdigit(str[i]))
		n = (n * 10) + (str[i++] - '0');
	if (neg == 1)
		return (-n);
	else
		return (n);
}
