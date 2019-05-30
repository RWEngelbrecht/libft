/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rengelbr <rengelbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 14:12:46 by rengelbr          #+#    #+#             */
/*   Updated: 2019/05/30 11:29:53 by rengelbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
char *ft_strrchr(const char *s, int c)
{
	if (!ft_strchr(s, c))
		return (NULL);
	while (*s)
		s++;
	while (*s != c)
		s--;
	return ((char*)s);
}
