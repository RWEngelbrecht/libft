/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rengelbr <rengelbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 14:24:24 by rengelbr          #+#    #+#             */
/*   Updated: 2019/05/28 14:24:28 by rengelbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	char *temp;
	int i;
	int j;

	temp = (char *)malloc(sizeof(char) * ((ft_strlen(s1) + ft_strlen(s2) + 1)));
	i = 0;
	j = 0;
	while (s1[j] != '\0')
	{
		temp[i] = s1[j];
		i++;
		j++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		temp[i] = s2[j];
		i++;
		j++;
	}
	temp[i] = '\0';
	s1 = temp;

	return (s1);
}
