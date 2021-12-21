/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpreissn <jpreissn@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 09:38:30 by dborgard          #+#    #+#             */
/*   Updated: 2021/12/19 20:25:40 by jpreissn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*end;

	if (lst)							// ist die Adresse auf die der Zeiger zeigt nicht NUL?
	{
		if (*lst)						// ist die Adresse des Zeigers auf den der Zeifer zeigt nicht NULL?
		{
			end = ft_lstlast(*lst);		// zum letzten Elemt gehen
			end->next = new;
		}
		else
			*lst = new;					// 
	}
}