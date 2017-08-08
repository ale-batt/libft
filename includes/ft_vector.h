/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-batt <ale-batt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 18:42:44 by ale-batt          #+#    #+#             */
/*   Updated: 2017/08/08 12:29:25 by ale-batt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_VECTOR_H
# define FT_VECTOR_H

# include <stdlib.h>
# include "ft_puts.h"
# include "ft_memory.h"

typedef struct		s_vector
{
	unsigned int	len;
	unsigned int	cap;
	unsigned int	size_elem;
	void			*data;
}					t_vector;

t_vector			vec_init(unsigned int cap, unsigned int size_elem);
void				*vec_add(t_vector *vec, void *data);
void				*vec_remove(t_vector *vec, unsigned int n);
void				*vec_delete(t_vector *vec, void *elem);
void				vec_remove_all(t_vector *vec);
void				vec_free(t_vector *vec);

#endif
