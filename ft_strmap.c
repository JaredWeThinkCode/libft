/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnaidoo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 07:56:02 by jnaidoo           #+#    #+#             */
/*   Updated: 2019/05/28 08:01:31 by jnaidoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char	const *s, char (*f)(char))
{
	char	*a;
	size_t	b;
	size_t	c;

	b = ft_strlen(s);
	a = ft_memalloc(b + 1);
	c = 0;
	while (c < b)
	{
		a[c] = f(s[c]);
		c++;
	}
	return (a);
}
