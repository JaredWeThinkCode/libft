/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnaidoo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 13:02:45 by jnaidoo           #+#    #+#             */
/*   Updated: 2019/05/28 13:14:47 by jnaidoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_istrim(char *s)
{
	size_t	a;

	a = 0;
	while (s[a] == ' ' || s[a] == ',' || s[a] == '\n' || s[a] == '\t')
	{
		a++;
	}
	return (a);
}

char	*ft_strtrim(char const *s)
{
	char	*a;
	size_t	b;
	size_t	c;
	size_t	d;

	if (!s)
		return (NULL);
	b = ft_istrim((char *)s);
	if (b == ft_strlen(s))
	{
		a = "\0";
		return (a);
	}
	d = ft_strlen((char *)s) - b - ft_istrim(ft_strrev((char *)s));
	a = ft_memalloc(d + 1);
	c = 0;
	while (c < d)
	{
		a[c] = s[b];
		c++;
		b++;
	}
	return (a);
}
