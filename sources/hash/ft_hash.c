/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hash.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-batt <ale-batt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/25 20:57:59 by ale-batt          #+#    #+#             */
/*   Updated: 2017/08/08 12:22:58 by ale-batt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hash.h"

void	ft_read_hash(t_hash *hash)
{
	t_hash	*tmp;

	tmp = hash;
	while (tmp)
	{
		ft_putstr("value : ");
		if (tmp->value)
			ft_putstr(tmp->value);
		ft_putstr("\t|\tkey : ");
		if (tmp->value)
			ft_putstr(tmp->key);
		ft_putchar('\n');
		tmp = tmp->next;
	}
}

void	ft_free_hash(t_hash **hash)
{
	t_hash *tmp;

	while (*hash)
	{
		tmp = *hash;
		(*hash) = (*hash)->next;
		free(tmp);
	}
	free(*hash);
	*hash = NULL;
}

int		ft_len_hash(t_hash *hash)
{
	int		i;
	t_hash	*tmp;

	i = 0;
	tmp = hash;
	while (tmp)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}
