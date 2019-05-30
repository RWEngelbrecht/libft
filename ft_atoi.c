/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rengelbr <rengelbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 10:06:48 by rengelbr          #+#    #+#             */
/*   Updated: 2019/05/30 14:26:20 by rengelbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
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
//	printf("No more spaces\n");
	if ()
	if (str[i] == '-')
	{
		neg = 1;
		i++;
//		printf("is negative\n");
	}
	/*while (str[i] == '+' || str[i] == '-' || str[i] == '0')
	{
		i++;
		printf("skipping +, - or 0\n");
	}*/
	while (/*str[i] != '\0') && */ft_isdigit(str[i]))
	{
		n *= 10;
		n += str[i] - '0';
//		printf("n is %d\n", n);
		i++;
	}
	if (neg == 1)
		return (-n);
	else
		return (n);
}
/*
int main()
{
	char n[40] = "99999999999999999999999999";
	int i1 = atoi(n);
	int i2 = ft_atoi(n);


	printf("%d\n", i1);
	printf("%d\n", i2);

	return 0;
}
*/
