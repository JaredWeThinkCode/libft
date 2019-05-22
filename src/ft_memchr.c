/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnaidoo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 14:57:34 by jnaidoo           #+#    #+#             */
/*   Updated: 2019/05/22 08:36:44 by jnaidoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	a;
	char	*r;

	a = 0;
	r = (char *)s;
	while (a < n)
	{
		if (*r == c)
		{
			return (r);
		}
		r++;
		a++;
	}
	return (NULL);
}
