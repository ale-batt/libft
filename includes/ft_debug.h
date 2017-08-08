/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_debug.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-batt <ale-batt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/25 15:49:06 by ale-batt          #+#    #+#             */
/*   Updated: 2017/08/08 12:15:01 by ale-batt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DEBUG_H
# define FT_DEBUG_H

# define ON 1
# define OFF 0

# define DGB(mode) set_debug_mode(mode);

FILE	*g_dbg;

void	set_debug_mode(int mode);
void	dbg_print(char *str);

#endif
