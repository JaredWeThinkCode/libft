/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnaidoo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 13:29:07 by jnaidoo           #+#    #+#             */
/*   Updated: 2019/05/22 14:06:53 by jnaidoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	a;
	size_t	b;
	size_t	c;
	char	*res;

	a = 0;
	b = 0;
	c = 0;
	res = (char *)haystack;
	if (ft_strlen(needle) == 0)
		return (res);
	while (a <= (ft_strlen(haystack) - ft_strlen(needle)) && a < len)
	{
		while (b < len)
		{
			if (c >= len)
				break ;
			if (haystack[a + b] != needle[b])
				break ;
			b++;
			c++;
		}
		if (b == ft_strlen(needle))
			return (&res[a]);
		a++;
		c++;
	}
	return (NULL);
}
