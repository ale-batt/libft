/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_match.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: world42 <world42@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/26 13:58:54 by world42           #+#    #+#             */
/*   Updated: 2017/08/08 12:12:14 by ale-batt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MATCH_H
# define FT_MATCH_H

int			ft_match(const char *str, const char *match);
size_t		ft_matchlen(const char *str, const char *match);
int			ft_matchn(const char *str, const char *match);
char		**ft_matchsplit(const char *str, const char *match);
char		**ft_matchpop(char *str, const char *match);

#endif
