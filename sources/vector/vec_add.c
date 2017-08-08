/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_add.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-batt <ale-batt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 11:48:20 by ale-batt          #+#    #+#             */
/*   Updated: 2017/08/08 12:28:40 by ale-batt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_vector.h"

void		*vec_add(t_vector *vec, void *data)
{
	void	*ptr;

	if (vec->len >= vec->cap)
	{
		vec->data = realloc(vec->data, vec->cap + vec->size_elem * 10);
		ft_bzero(vec->data + (vec->cap * vec->size_elem), vec->size_elem * 10);
		vec->cap += 10;
	}
	ptr = vec->data + (vec->size_elem * vec->len);
	ft_memcpy(ptr, data, vec->size_elem);
	vec->len += 1;
	return (ptr);
}
