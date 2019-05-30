/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rengelbr <rengelbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 14:12:46 by rengelbr          #+#    #+#             */
/*   Updated: 2019/05/30 10:20:07 by rengelbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
char *ft_strrchr(const char *s, int c)
{
	//size_t		i ;

	//i = ft_strlen(s);
	if (!ft_strchr(s, c))
		return (NULL);
	while (*s)
		s++;
	while (*s != c)
		s--;
	return ((char*)s);
	/*if (!i)
		return (NULL);
	while (i >= 0)
	{
		if (*(s + i) == (char)c)
			return ((char *)(s+i));
		i--;
	}

	while (--i >= 1)
	{
		if (*(s + i) == (char)c)
			return ((char *)(s + i));
	}*/
	//return (NULL);

}

int main()
{
	char *src = "abbbbbbbbbbbbbbb";
	char *d1 = strrchr(src, 'a');
	char *d2 = ft_strrchr(src, 'a');

	printf("%s\n", d1);
	printf("%s\n", d2);
}
