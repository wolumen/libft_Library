/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpreissn <jpreissn@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 09:22:19 by dborgard          #+#    #+#             */
/*   Updated: 2021/12/19 20:16:07 by jpreissn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)  // (Adresse Anfang der Liste, Adresse neues Listenelement)
{
	if (lst)
	{
		if (*lst)
			new->next = *lst;
		*lst = new;					// Liste beginnt jetzt dort wo new steht
	}
}
