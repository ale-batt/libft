/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: world42 <world42@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/01 22:34:54 by world42           #+#    #+#             */
/*   Updated: 2014/02/22 12:29:28 by world42          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../includes/libft.h"

t_list		*ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
    t_list	**tmp;

    del((*alst)->content, (*alst)->content_size);
    tmp = &((*alst)->next);
    free(*alst);
    *alst = *tmp;
    return (*alst);
}
