/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puts.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: world42  <ale-batt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/26 13:59:30 by world42           #+#    #+#             */
/*   Updated: 2016/09/01 16:28:06 by ale-batt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUTS_H
# define PUTS_H

void	ft_putbase(long l, int base, char *letters);
void	ft_putchar_fd(char c, int fd);
void	ft_putchar(char c);
void	ft_putdouble(double d, double epsilone);
void	ft_putendl_fd(const char *s, int fd);
void	ft_putendl(const char *s);
void	ft_putfloat(float d, double epsilone);
void	ft_puthex_64(uint64_t l);
void	ft_puthex(unsigned long l);
void	ft_putlong(long l);
void	ft_putnbr_fd(int n, int fd);
void	ft_putnbr(int n);
void	ft_putstr_fd(const char *s, int fd);
void	ft_putstr(const char *s);
void	ft_putnull(char *s);

#endif
