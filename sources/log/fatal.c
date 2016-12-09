/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fatal.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-batt <ale-batt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/09 15:34:01 by ale-batt          #+#    #+#             */
/*   Updated: 2016/12/09 18:13:57 by ale-batt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_log.h"
#include <stdarg.h>

void	log_fatal(char *str, ...)
{
	va_list	ap;
	char	*tmp;
	t_log	*log;

	log = log_singleton(NULL);
	if (log->fd == -1)
		exit(-1);
	va_start(ap, str);
	ft_putstr_fd(RED, log->fd);
	ft_putstr_fd(str, log->fd);
	while (42)
	{
		tmp = va_arg(ap, char *);
		if (!tmp)
			break ;
		ft_putstr_fd(tmp, log->fd);
	}
	ft_putstr_fd(DEFAULT, log->fd);
	va_end(ap);
	exit(-1);
}
