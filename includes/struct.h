/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: world42 <world42@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/27 03:15:23 by world42           #+#    #+#             */
/*   Updated: 2014/04/27 03:17:10 by world42          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef STRUCT_H
# define STRUCT_H

# include <string.h>

typedef struct		s_list
{
    void          *content;
    size_t        content_size;
    struct s_list	*next;
}                 t_list;

#endif
