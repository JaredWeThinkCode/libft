/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnaidoo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 13:29:07 by jnaidoo           #+#    #+#             */
/*   Updated: 2019/05/23 14:03:36 by jnaidoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	a;
	size_t	b;
	char	*c;
	char	*d;

	a = 0;
	c = (char *)haystack;
	d = (char *)needle;
	if (d[0] == '\0')
		return (c);
	while (c[a] != '\0' && a < len)
	{
		b = 0;
		while (d[b] != '\0')
		{
			if (c[a + b] != d[b] || (a + b >= len))
				break ;
			b++;
		}
		if (d[b] == '\0')
			return (&c[a]);
		a++;
	}
	return (NULL);
}
