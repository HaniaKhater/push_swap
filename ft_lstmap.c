/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhater <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 04:30:31 by hkhater           #+#    #+#             */
/*   Updated: 2021/12/10 04:49:14 by hkhater          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*tmp;

	if (!lst)
		return (0);
	tmp = ft_lstnew((*f)(lst->content));
	if (!tmp)
		return (0);
	head = tmp;
	while (lst->next)
	{
		lst = lst->next;
		tmp->next = ft_lstnew((*f)(lst->content));
		if (tmp->next == NULL)
		{
			ft_lstclear(&head, del);
			return (0);
		}
		tmp = tmp->next;
	}
	return (head);
}
