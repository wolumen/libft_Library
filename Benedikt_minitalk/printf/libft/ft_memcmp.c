/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brein <brein@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 22:55:32 by brein             #+#    #+#             */
/*   Updated: 2021/06/02 10:38:05 by brein            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*a1;
	unsigned char	*a2;

	if (n == 0)
		return (0);
	a1 = (unsigned char *) s1;
	a2 = (unsigned char *) s2;
	while (*a1 == *a2 && n > 1)
	{
		a1++;
		a2++;
		n--;
	}
	return (*a1 - *a2);
}
