/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: world42 <world42@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/27 03:44:47 by world42           #+#    #+#             */
/*   Updated: 2014/04/27 03:44:48 by world42          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include "../includes/libft.h"

void	ft_putnbr(int n)
{
    if (n == INT_MIN)
    {
        ft_putnbr(n / 10);
        ft_putnbr(-(n % 10));
    }
    else if (n < 0 && n != INT_MIN)
    {
        ft_putchar('-');
        ft_putnbr(-n);
    }
    else if (n >= 10)
    {
        ft_putnbr(n / 10);
        ft_putnbr(n % 10);
    }
    else
        ft_putchar(n + '0');
}
