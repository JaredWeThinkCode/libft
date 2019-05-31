/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnaidoo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 13:02:45 by jnaidoo           #+#    #+#             */
/*   Updated: 2019/05/31 12:24:37 by jnaidoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_istrim(char const *s)
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
	size_t	d;

	b = ft_istrim((char *)s);
	d = ft_strlen((char *)s) - b - ft_istrim(ft_strrev((char *)s));
	if (b == ft_strlen(s))
		return ("");
	if (!(a = ft_memalloc(d + 1)))
		return (NULL);
	ft_strncpy(a, &s[b], d);
	return (a);
}
