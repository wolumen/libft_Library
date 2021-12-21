/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brein <brein@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 00:57:03 by brein             #+#    #+#             */
/*   Updated: 2021/06/17 14:38:49 by brein            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*memory;
	size_t	i;

	memory = (char *) malloc(nmemb * size);
	if (memory == NULL)
		return (NULL);
	i = 0;
	while (i < (nmemb * size))
	{
		memory[i] = '\0';
		++i;
	}
	return (memory);
}
