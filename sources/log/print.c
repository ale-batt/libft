/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-batt <ale-batt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/09 14:52:05 by ale-batt          #+#    #+#             */
/*   Updated: 2016/12/09 18:12:02 by ale-batt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_log.h"
#include <stdarg.h>

void	log_print(char *msg, ...)
{
	va_list	ap;
	char	*tmp;
	t_log	*log;

	log = log_singleton(NULL);
	if (log->fd == -1)
		return ;
	va_start(ap, str);
	ft_putstr_fd(str, log->fd);
	while (42)
	{
		tmp = va_arg(ap, char *);
		if (!tmp)
			break ;
		ft_putstr_fd(tmp, log->fd);
	}
	va_end(ap);
}
