/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: world42 <world42@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 17:09:28 by world42           #+#    #+#             */
/*   Updated: 2016/08/19 16:01:08 by world42          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

double		ft_pow(double x, double y)
{
	if (!y)
		return (1);
	return (x * ft_pow(x, y - 1));
}
