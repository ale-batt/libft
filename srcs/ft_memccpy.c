/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: world42 <world42@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 19:32:18 by world42           #+#    #+#             */
/*   Updated: 2014/04/27 03:37:17 by world42          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void				*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
    size_t			tmp;
    unsigned char	*s1_tmp;
    unsigned char	*s2_tmp;

    tmp = 0;
    s1_tmp = (unsigned char*)s1;
    s2_tmp = (unsigned char*)s2;
    while (tmp != n)
    {
        *(s1_tmp + tmp) = *(s2_tmp + tmp);
        if (*(s2_tmp + tmp) == c)
            return (s1_tmp + tmp + 1);
        tmp++;
    }
    return (NULL);
}
