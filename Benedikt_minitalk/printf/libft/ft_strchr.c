/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brein <brein@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 22:57:28 by brein             #+#    #+#             */
/*   Updated: 2021/05/25 13:39:51 by brein            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	*temp;

	temp = (unsigned char *) s;
	while (*temp != '\0' && *temp != (unsigned char) c)
		temp++;
	if (*temp == (unsigned char) c)
		return ((char *) temp);
	return (NULL);
}
