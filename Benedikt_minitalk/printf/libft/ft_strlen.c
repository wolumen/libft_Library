/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brein <brein@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 22:59:16 by brein             #+#    #+#             */
/*   Updated: 2021/05/25 13:41:03 by brein            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	unsigned char	*temp;
	size_t			n;

	temp = (unsigned char *) s;
	n = 0;
	while (*temp != '\0')
	{
		n++;
		temp++;
	}
	return (n);
}
