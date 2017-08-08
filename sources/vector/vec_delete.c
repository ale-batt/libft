/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_delete.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-batt <ale-batt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 11:50:21 by ale-batt          #+#    #+#             */
/*   Updated: 2017/08/08 12:31:23 by ale-batt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_vector.h"

void		*vec_remove(t_vector *vec, unsigned int n)
{
	void	*ptr;

	if (n > vec->len || vec->len == 0)
		return (NULL);
	ptr = vec->data + (vec->size_elem * n);
	ft_memmove(ptr, ptr + vec->size_elem,
			(vec->len * vec->size_elem) - (n * vec->size_elem));
	vec->len -= 1;
	if (n == 0)
		return (ptr);
	return (ptr - vec->size_elem);
}

void		*vec_delete(t_vector *vec, void *elem)
{
	void			*ptr;
	unsigned int	i;

	i = 0;
	ptr = vec->data;
	while (i < vec->len)
	{
		if (ptr == elem)
			return (vec_remove(vec, i));
		ptr += vec->size_elem;
		i++;
	}
	return (NULL);
}

void		vec_remove_all(t_vector *vec)
{
	void	*ptr;

	ptr = vec->data;
	while (ptr)
		ptr = vec_delete(vec, ptr);
}

void		vec_free(t_vector *vec)
{
	free(vec->data);
}
