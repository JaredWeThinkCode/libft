/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnaidoo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 14:38:58 by jnaidoo           #+#    #+#             */
/*   Updated: 2019/05/23 08:41:11 by jnaidoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *restrict d, const void *restrict s, int c, size_t n)
{
	size_t	a;
	char	*b;
	char	*f;
	char	*e;

	a = 0;
	b = (char *)d;
	f = (char *)s;
	e = NULL;
	while (a < n && e == NULL)
	{
		b[a] = f[a];
		if (f[a] == c)
		{
			e = b + a + 1;
		}
		a++;
	}
	return (e);
}
