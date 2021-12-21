/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brein <brein@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 13:47:57 by brein             #+#    #+#             */
/*   Updated: 2021/06/14 21:13:35 by brein            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*target;
	int		i;
	char	*temp;
	size_t	size;

	size = ft_strlen(s1) + ft_strlen(s2);
	i = 0;
	target = ft_calloc(sizeof(char), size + 1);
	temp = (char *) s1;
	if (!target || (!s1 && !s2))
		return (NULL);
	while (*temp != '\0')
	{
		target[i] = *temp;
		temp++;
		i++;
	}
	temp = (char *) s2;
	while (*temp != '\0')
	{
		target[i] = *temp;
		temp++;
		i++;
	}
	return (target);
}
