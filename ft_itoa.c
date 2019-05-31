/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnaidoo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 11:55:16 by jnaidoo           #+#    #+#             */
/*   Updated: 2019/05/31 10:56:13 by jnaidoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char		*a;
	unsigned int	b;
	long int	c;

	b = ft_nbrlen(n);
	c = n;
	if (n < 0)
		c = c * -1;
	if (!(a = ft_strnew(b)))
		return (NULL);
	a[b] = '\0';
	b--;
	while (c >= 10)
	{
		a[b] = (c % 10) + '0';
		c = c / 10;
		b--;
	}
	a[b] = c + '0';
	b--;
	if (n < 0)
		a[0] = '-';
	return (a);
}
