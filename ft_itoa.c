/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rengelbr <rengelbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 15:17:59 by rengelbr          #+#    #+#             */
/*   Updated: 2019/06/03 10:16:19 by rengelbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
int		ft_countchars(int n)
{
	int i;

	i = 0;
	if (n == 0)
		i++;
	else if (n < 0)
		i++;
	else
	{
		while (n > 0)
		{
			i++;
			n /= 10;
		}
	}
	return (i);
}

char    *ft_itoa(int n)
{
    char    *str;
    int     i;
    int     neg;

    str = ft_strnew(ft_countchars(n));
    i = 0;
    neg = 0;
    if (n == 0)
    {
        str[i] = '0';
		i++;
        str[i] = '\0';
        return (str);
    }
    if (n < 0)
        neg = 1;
    while (n)
    {
        str[i] = (n % 10) + '0';
        n /= 10;
		i++;
    }
    if (neg == 1)
        str[i++] = '-';
    str[i] = '\0';
    ft_strrev(str);
    return (str);
}

int main()
{
	char *i1 = ft_itoa(-623);
//	char *i2 = ft_itoa(156);
//	char *i3 = ft_itoa(-0);

	printf("%s\n", i1);
	return 0;

}
