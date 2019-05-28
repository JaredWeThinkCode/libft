/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnaidoo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 08:04:11 by jnaidoo           #+#    #+#             */
/*   Updated: 2019/05/28 08:09:54 by jnaidoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*a;
	size_t	b;
	size_t	c;

	b = ft_strlen(s);
	a = ft_memalloc(b + 1);
	c = 0;
	while (c < b)
	{
		a[c] = f(c, s[c]);
		c++;
	}
	return (a);
}
