/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_multiputs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-batt <ale-batt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 22:28:21 by ale-batt          #+#    #+#             */
/*   Updated: 2016/12/13 17:08:46 by ale-batt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdarg.h>

void	ft_multiputs_args(int fd, char *str, va_list ap)
{
	char	*tmp;

	ft_putstr_fd(str, fd);
	while (42)
	{
		tmp = va_arg(ap, char *);
		if (!tmp)
			break ;
		ft_putstr_fd(tmp, fd);
	}
	va_end(ap);
}

void	ft_multiputs_fd(int fd, char *str, ...)
{
	va_list	ap;

	va_start(ap, str);
	ft_multiputs_args(fd, str, ap);
}

void	ft_multiputs(char *str, ...)
{
	va_list	ap;

	va_start(ap, str);
	ft_multiputs_args(1, str, ap);
}

void	ft_fmultiputs(FILE *f, char *str, va_list ap)
{
	char	*tmp;

	fwrite(str, ft_strlen(str), sizeof(str), f);
	while (42)
	{
		tmp = va_arg(ap, char *);
		if (!tmp)
			break ;
		fwrite(tmp, ft_strlen(tmp), sizeof(tmp), f);
	}
	va_end(ap);
}
