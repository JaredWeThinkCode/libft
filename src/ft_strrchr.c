/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnaidoo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 11:04:04 by jnaidoo           #+#    #+#             */
/*   Updated: 2019/05/22 14:10:56 by jnaidoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	a;
	size_t	b;
	char	*res;

	a = ft_strlen(s);
	b = 0;
	res = (char *)s;
	while (a > 0)
	{
		if (res[a] == c)
		{
			return (&res[a]);
		}
		a--;
	}
	return (NULL);
}
