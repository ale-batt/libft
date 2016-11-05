/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_multiputs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-batt <ale-batt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 22:28:21 by ale-batt          #+#    #+#             */
/*   Updated: 2016/11/05 22:33:08 by ale-batt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdarg.h>

void	ft_multiputs(char *str, ...)
{
	va_list	ap;
	char	*tmp;

	va_start(ap, str);
	while (42)
	{
		tmp = va_arg(ap, char *);
		if (!tmp)
			break ;
		ft_putstr(tmp);
	}
	va_end(ap);
}
