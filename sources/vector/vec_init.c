/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_init.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-batt <ale-batt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 11:46:10 by ale-batt          #+#    #+#             */
/*   Updated: 2017/08/08 12:30:31 by ale-batt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_vector.h"

t_vector	vec_init(unsigned int cap, unsigned int size_elem)
{
	t_vector	vec;

	vec.len = 0;
	vec.cap = cap;
	vec.size_elem = size_elem;
	vec.data = malloc(size_elem * cap);
	if (!vec.data)
	{
		ft_putendl("Malloc error");
		exit(EXIT_FAILURE);
	}
	ft_bzero(vec.data, size_elem * cap);
	return (vec);
}
