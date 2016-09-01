/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: world42  <ale-batt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/26 13:53:50 by world42           #+#    #+#             */
/*   Updated: 2016/09/01 16:27:17 by ale-batt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
# define ARRAY_H

char		*ft_tabjoin(char **tab);
void		ft_tabdel(char ***tab);
int			ft_tablen(char **tab);
void		ft_freetab(char **tab);

#endif
