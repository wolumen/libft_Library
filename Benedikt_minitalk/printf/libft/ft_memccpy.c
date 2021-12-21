/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brein <brein@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 22:54:24 by brein             #+#    #+#             */
/*   Updated: 2021/06/02 10:36:27 by brein            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*dest_temp;
	unsigned char	*src_temp;

	dest_temp = (unsigned char *) dest;
	src_temp = (unsigned char *) src;
	while (n > 0)
	{
		*dest_temp = *src_temp;
		if (*src_temp == (unsigned char) c)
			return (dest_temp + 1);
		dest_temp++;
		src_temp++;
		n--;
	}
	return (NULL);
}
