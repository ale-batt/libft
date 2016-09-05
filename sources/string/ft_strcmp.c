/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: world42 <world42@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 17:32:21 by world42           #+#    #+#             */
/*   Updated: 2016/09/02 16:23:22 by ale-batt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	unsigned char	*s1_tmp;
	unsigned char	*s2_tmp;

	s1_tmp = (unsigned char*)s1;
	s2_tmp = (unsigned char*)s2;
	while (*s1_tmp == *s2_tmp)
	{
		if (!*s1_tmp && !*s2_tmp)
			return (0);
		s1_tmp++;
		s2_tmp++;
	}
	return (*s1_tmp - *s2_tmp);
}
