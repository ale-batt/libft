/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   modify.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-batt <ale-batt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/27 18:53:00 by ale-batt          #+#    #+#             */
/*   Updated: 2016/08/31 16:23:19 by ale-batt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hash.h"

void	ft_modify_value(t_hash *hash, char *key, char *newvalue)
{
	t_hash	*tmp;

	tmp = hash;
	while (tmp)
	{
		if (ft_strcmp(tmp->key, key) == 0)
		{
			tmp->value = ft_strdup(newvalue);
			break ;
		}
		tmp = tmp->next;
	}
}
