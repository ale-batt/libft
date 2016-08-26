/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: world42  <ale-batt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/26 13:59:21 by world42           #+#    #+#             */
/*   Updated: 2016/08/26 14:10:29 by world42          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MEMORY_H
# define MEMORY_H

void		ft_bzero(void *s, size_t n);
void		*ft_memalloc(size_t size);
void		*ft_memccpy(void *s1, const void *s2, int c, size_t n);
void		*ft_memchr(const void *s, int c, size_t n);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
void		*ft_memcpy(void *s1, const void *s2, size_t n);
void		ft_memdel(void **ap);
void		*ft_memmove(void *s1, const void *s2, size_t n);
void		*ft_memset(void *b, int c, size_t len);

#endif
