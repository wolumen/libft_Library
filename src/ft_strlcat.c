/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpreissn <jpreissn@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 12:59:01 by jpreissn          #+#    #+#             */
/*   Updated: 2021/11/23 12:59:01 by jpreissn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_lenght;
	size_t	src_lenght;
	size_t	len;

	dest_lenght = ft_strlen(dest);
	src_lenght = ft_strlen(src);
	len = size - 1 - dest_lenght;
	if (size <= dest_lenght)
		return (size + src_lenght);
	while (*dest)
		dest++;
	while (*src && len)
	{
		*dest++ = *src++;
		len--;
	}
	*dest = '\0';
	return (dest_lenght + src_lenght);
}
