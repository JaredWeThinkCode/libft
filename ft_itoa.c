/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnaidoo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 11:55:16 by jnaidoo           #+#    #+#             */
/*   Updated: 2019/05/27 13:10:14 by jnaidoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_nbrlen(int nbr)
{
	int	a;

	a = 0;
	if (nbr == 0)
		a = 1;
	if (nbr < 0)
	{
		nbr = nbr * -1;
		a++;
	}
	while (nbr > 0)
	{
		nbr = nbr / 10;
		a++;
	}
	return (a);
}

char	*ft_itoa(int n)
{
	char	*a;
	int		b;

	b = ft_nbrlen(n);
	a = ft_memalloc(b + 1);
	if (n < 0)
	{
		a[0] = '-';
	}
	a[b] = '\0';
	while (n > 0)
	{
		a[b - 1] = n % 10 + '0';
		n = n / 10;
		b--;
	}
	return (a);
}
