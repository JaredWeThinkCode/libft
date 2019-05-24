/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnaidoo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 12:34:46 by jnaidoo           #+#    #+#             */
/*   Updated: 2019/05/24 13:40:06 by jnaidoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	a;
	size_t	e;
	char	*b;
	char	*c;
	char	*d;

	a = ft_strlen(s1) + ft_strlen(s2);
	if (*s1 == 0 || *s2 == 0 || !(b = ft_memalloc(a + 1)))
		return (NULL);
	c = (char *)s1;
	d = (char *)s2;
	a = 0;
	while (c[a] != '\0')
	{
		b[a] = c[a];
		a++;
	}
	e = 0;
	while (d[e] != '\0')
	{
		b[a] = d[e];
		e++;
		a++;
	}
	b[a] = '\0';
	return (b);
}
