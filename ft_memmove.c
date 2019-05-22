/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnaidoo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 14:51:59 by jnaidoo           #+#    #+#             */
/*   Updated: 2019/05/22 08:17:32 by jnaidoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	a;
	char	*b;
	char	*c;

	a = 0;
	b = (char *)dst;
	c = (char *)src;
	while (a < len)
	{
		b[a] = c[a];
		a++;
	}
	return (dst);
}
