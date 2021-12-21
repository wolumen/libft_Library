/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brein <brein@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 22:58:50 by brein             #+#    #+#             */
/*   Updated: 2021/06/03 04:00:34 by brein            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned char	*temp_dst;
	unsigned char	*temp_src;
	size_t			i;

	i = 0;
	temp_dst = (unsigned char *) dst;
	temp_src = (unsigned char *) src;
	while (*temp_src != '\0')
	{
		i++;
		temp_src++;
	}
	temp_src = (unsigned char *) src;
	while (*temp_src != '\0' && size > 1)
	{
		*temp_dst = *temp_src;
		temp_dst++;
		temp_src++;
		size--;
	}
	if (size > 0)
		*temp_dst = '\0';
	return (i);
}
