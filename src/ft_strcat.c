/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnaidoo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 10:00:01 by jnaidoo           #+#    #+#             */
/*   Updated: 2019/05/22 10:04:10 by jnaidoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *restrict s1, const char *restrict s2)
{
	size_t	a;
	size_t	b;

	a = ft_strlen(s1);
	b = 0;
	while (b < ft_strlen(s2))
	{
		s1[a] = s2[b];
		b++;
		a++;
	}
	s1[a] = '\0';
	return (s1);
}
