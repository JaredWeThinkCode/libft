/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnaidoo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 14:14:47 by jnaidoo           #+#    #+#             */
/*   Updated: 2019/05/22 14:28:38 by jnaidoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	a;
	size_t	b;

	a = ft_strlen(dst);
	b = ft_strlen(src);
	if (a + b >= dstsize)
	{
		return (dstsize + b);
	}
	ft_memcpy(dst + a, src, b + 1);
	return (dstsize + b);
}
