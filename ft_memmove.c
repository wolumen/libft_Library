/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpreissn <jpreissn@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 18:03:12 by jpreissn          #+#    #+#             */
/*   Updated: 2021/11/22 18:03:12 by jpreissn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)	// memmove copies source first to a buffer and then to the source
{															// safer then memcpy when memoryfrom dest and src is overlapping
	char	*d;
	char	*s;

	d = (char *)dest;										// Steffen memmove buffers string, anders als memcpy, wo mache ich das hier im code?
	s = (char *)src;
	if (s < d)												// Steffen warum muss das so rum? (andersrum wäre falsch)
	{
		while (n > 0)
		{
			d[n - 1] = s[n - 1];
			n--;
		}	
	}
	else
	{
		ft_memcpy(d, s, n);
	}
	return (dest);
}
