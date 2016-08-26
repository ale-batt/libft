/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: world42  <ale-batt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/26 14:03:22 by world42           #+#    #+#             */
/*   Updated: 2016/08/26 14:04:21 by world42          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATCH_H
# define MATCH_H

int			ft_match(const char *str, const char *match);
size_t		ft_matchlen(const char *str, const char *match);
int			ft_matchn(const char *str, const char *match);
char		**ft_matchsplit(const char *str, const char *match);
char		**ft_matchpop(char *str, const char *match);


#endif
