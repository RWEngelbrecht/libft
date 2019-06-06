/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rengelbr <rengelbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 10:06:51 by rengelbr          #+#    #+#             */
/*   Updated: 2019/06/03 13:43:11 by rengelbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		ft_strcmp(const char *s1, const char *s2)
{
	int i;

	i = 0;
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (((unsigned char)*s1 - (unsigned char)*s2) < 0)
		return (-1);
	if (((unsigned char)*s1 - (unsigned char)*s2) > 0)
		return (1);
	return (0);
}

int main()
{
	int a = ft_strcmp("c", "q");
	int b = strcmp("c", "q");

	printf("ft   |%d|\n", a);
	printf("libc |%d|\n", b);
	return 0;
}
