/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: world42 <world42@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/26 13:58:37 by world42           #+#    #+#             */
/*   Updated: 2016/08/26 14:40:40 by ale-batt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_H
# define LIST_H

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

t_list		*ft_lst(void *content, size_t content_size);
void		ft_lstadd(t_list **alst, t_list *new);
void		ft_lstdel(t_list **alst, void (*del)(void*, size_t));
void		*ft_lstcmp(t_list *lst, void *content, int (*cmpf)(void*, void*));
void		ft_lstdelone(t_list **alst, void (*del)(void*, size_t));
t_list		*ft_lstinsert(t_list **lst, t_list *new, int (*cmpf)(void*, void*));
void		ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
t_list		*ft_lstnew(void const *content, size_t content_size);
int			ft_lstsize(t_list *lst);

#endif
