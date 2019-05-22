/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnaidoo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 09:43:36 by jnaidoo           #+#    #+#             */
/*   Updated: 2019/05/22 09:46:48 by jnaidoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	size_t a;

	a = 0;
	while (a < ft_strlen(src))
	{
		dst[a] = src[a];
		a++;
	}
	dst[a] = '\0';
	return (dst);
}