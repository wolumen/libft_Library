/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brein <brein@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 12:24:49 by brein             #+#    #+#             */
/*   Updated: 2021/06/16 15:59:05 by brein            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*target;
	char			*temp;
	unsigned int	i;

	i = 0;
	if ((size_t)start >= ft_strlen(s))
		return (ft_strdup(""));
	target = (char *)malloc((len + 1) * sizeof(char));
	if (!target)
		return (NULL);
	temp = (char *) s;
	while (len > 0 && *temp != '\0')
	{
		target[i] = temp[start + i];
		i++;
		len--;
	}
	target[i] = '\0';
	return (target);
}
