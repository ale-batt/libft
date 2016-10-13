/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: world42 <world42@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/30 03:00:04 by world42           #+#    #+#             */
/*   Updated: 2016/10/13 17:26:45 by ale-batt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(const char *s1, const char *s2)
{
	char	*dst;

	if (!s1 || !s2)
		return (NULL);
	dst = ft_strnew(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!dst)
		return (NULL);
	ft_strcpy(dst, s1);
	ft_strcat(dst, s2);
	return (dst);
}

char		*ft_strfjoin(char *s1, char *s2)
{
	char	*str;

	str = ft_strjoin(s1, s2);
	free(s1);
	free(s2);
	return (str);
}
