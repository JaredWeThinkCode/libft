/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnaidoo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 11:55:40 by jnaidoo           #+#    #+#             */
/*   Updated: 2019/05/22 13:31:09 by jnaidoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	a;
	size_t	b;
	char	*res;

	a = 0;
	b = 0;
	res = (char *)haystack;
	if (ft_strlen(needle) == 0)
		return (res);
	while (a <= (ft_strlen(haystack) - ft_strlen(needle)))
	{
		while (b < ft_strlen(needle))
		{
			if (haystack[a + b] != needle[b])
				break ;
			b++;
		}
		if (b == ft_strlen(needle))
			return (&res[a]);
		a++;
	}
	return (NULL);
}
