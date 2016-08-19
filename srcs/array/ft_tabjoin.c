/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: world42 <world42@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/25 00:22:50 by world42           #+#    #+#             */
/*   Updated: 2014/01/25 00:28:07 by world42          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char		*ft_tabjoin(char **tab)
{
	char	*str;
	char	*tmp;

	if (tab)
	{
		str = ft_strnew(2);
		while (*tab)
		{
			tmp = str;
			str = ft_strjoin(str, *tab);
			free(tmp);
			++tab;
		}
		return (str);
	}
	return (NULL);
}
