/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_log.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-batt <ale-batt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/09 14:36:50 by ale-batt          #+#    #+#             */
/*   Updated: 2016/12/11 23:47:41 by ale-batt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LOG_H
# define FT_LOG_H

# include <fcntl.h>
# include "libft.h"

# define TMPLOG "/tmp/logs.txt"
# define CLOSE "CLOSE"

typedef enum	e_flags {
	FLAG_TIME = 1,
}				t_flags;

typedef struct	s_log
{
	int			fd;
	int			flag_time;
}				t_log;

void			log_init(char *logfile);
void			log_done(void);
t_log			*log_singleton(char *path);
int				log_getfd(void);

void			log_print(char *msg, ...);
void			log_println(char *msg, ...);
void			log_error(char *str, ...);
void			log_fatal(char *msg, ...);

#endif
