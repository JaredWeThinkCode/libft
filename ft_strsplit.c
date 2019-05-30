/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnaidoo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 10:06:09 by jnaidoo           #+#    #+#             */
/*   Updated: 2019/05/30 12:32:07 by jnaidoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_cntwrd(char const *s, char c)
{
	int		a;
	int		b;

	a = 0;
	b = 0;
	if (s[0] != c)
		b++;
	while (s[a] != '\0')
	{
		if (s[a] == c && s[a + 1] != c && s[a + 1] != '\0')
			b++;
		a++;
	}
	return (b);
}

int		ft_cntwrdlen(char const *s, int start, char c)
{
	int		a;

	a = 0;
	if (!s)
		return (0);
	while (s[start] != c && s[start] != '\0')
	{
		a++;
		start++;
	}
	return (a);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**a;
	int		b;
	int		d;
	int		e;

	b = ft_cntwrd(s, c);
	a = (char **)ft_memalloc(sizeof(char *) * (b + 1));
	d = 0;
	e = 0;
	if (!s || !a)
		return (NULL);
	while (d < b)
	{
		while (s[e] == c && s[e] != '\0')
			e++;
		a[d] = ft_strsub(s, e, ft_cntwrdlen(s, e, c));
		while (s[e] != c && s[e] != '\0')
			e++;
		d++;
	}
	a[d] = 0;
	return (a);
}
