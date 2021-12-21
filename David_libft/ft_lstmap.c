/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborgard <dborgard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 08:56:00 by dborgard          #+#    #+#             */
/*   Updated: 2021/12/02 09:19:25 by dborgard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*start;
	t_list	*tmp;

	if (lst && f)
	{
		start = ft_lstnew(f(lst->content));
		tmp = start;
		while (lst->next)
		{
			lst = lst->next;
			if ((tmp->next = ft_lstnew(ft_strdup(f(lst->content)))) == NULL)
			{
				ft_lstclear(&start, del);
				return (NULL);
			}
			tmp = tmp->next;
		}
		return (start);
	}
	return (NULL);
}
