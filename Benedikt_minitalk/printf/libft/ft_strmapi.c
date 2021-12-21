/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brein <brein@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 09:18:58 by brein             #+#    #+#             */
/*   Updated: 2021/06/16 10:12:15 by brein            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*target;
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return (NULL);
	target = ft_calloc(sizeof(char), ft_strlen(s) + 1);
	if (!target)
		return (NULL);
	while (s[i])
	{
		target[i] = (*f)(i, s[i]);
		++i;
	}
	return (target);
}
