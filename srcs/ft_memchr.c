/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: world42 <world42@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 12:47:12 by world42           #+#    #+#             */
/*   Updated: 2014/02/16 22:28:21 by world42          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
    unsigned char	*s_tmp;

    s_tmp = ((unsigned char*)s);
    while (n--)
    {
        if ((*s_tmp) == c)
            return ((void*)s_tmp);
        ++s_tmp;
    }
    return (NULL);
}
