/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnaidoo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 14:38:58 by jnaidoo           #+#    #+#             */
/*   Updated: 2019/05/22 08:16:07 by jnaidoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{
	size_t	a;
	char	*b;
	char	*d;

	a = 0;
	b = (char *)dst;
	d = (char *)src;
	while (a < n)
	{
		b[a] = d[a];
		if (d[a] == c)
		{
			break ;
		}
		a++;
	}
	return (dst);
}
