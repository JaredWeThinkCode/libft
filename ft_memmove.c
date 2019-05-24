/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnaidoo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 14:51:59 by jnaidoo           #+#    #+#             */
/*   Updated: 2019/05/23 09:17:54 by jnaidoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*a;
	char	*b;
	char	*c;

	a = (char *)dst;
	b = (char *)src;
	c = (char *)malloc(len);
	if (c == NULL)
	{
		return (NULL);
	}
	else
	{
		ft_memcpy(c, b, len);
		ft_memcpy(a, c, len);
	}
	return (dst);
}
