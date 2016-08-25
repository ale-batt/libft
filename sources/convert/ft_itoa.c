/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: world42 <world42@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/30 01:03:09 by world42           #+#    #+#             */
/*   Updated: 2014/04/27 03:34:44 by world42          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_itoa_recurse(int n, int size, char *nbr)
{
	if (n < 0)
	{
		nbr[0] = '-';
		return (ft_itoa_recurse(n * -1, size, nbr));
	}
	if (n >= 10 && size >= 0)
	{
		nbr[size] = (n % 10) + '0';
		return (ft_itoa_recurse(n / 10, size - 1, nbr));
	}
	nbr[size] = n + '0';
	return (nbr);
}

char			*ft_itoa(int n)
{
	char	*nbr;
	int		size;

	if (n <= -2147483648)
		return (ft_strdup("-2147483648"));
	size = ft_numlen(n);
	nbr = ft_strnew(size);
	return (ft_itoa_recurse(n, size - 1, nbr));
}