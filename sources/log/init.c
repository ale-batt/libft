/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-batt <ale-batt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/09 14:36:34 by ale-batt          #+#    #+#             */
/*   Updated: 2016/12/09 17:51:32 by ale-batt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_log.h"

void	log_init(char *logfile)
{	
	log_singleton(logfile);
}

void	log_done(void)
{
	log_singleton(CLOSE);
}

t_log	*log_singleton(char *path)
{
	static t_log	log = {-1, 0};

	if (log.fd == -1 && path != NULL)
		log.fd = open(path, O_RDWR | O_CREATE | O_APPEND, 0644);
	else if (ft_strequ(path, "CLOSE"))
		return (close(log.fd));
	return (&log);
}

int		log_getfd(void)
{
	t_log	*log;

	log = log_singleton(NULL);
	return (log.fd);
}
