/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpreissn <jpreissn@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:52:59 by jpreissn          #+#    #+#             */
/*   Updated: 2021/11/24 16:52:59 by jpreissn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)	// returns a substring from the string ’s’.
{																	// The substring begins at index ’start’ and is of maximum size ’len’.
	char				*substr;
	unsigned int		i;

	if (!s)
		return (NULL);
	i = 0;
	if (len > ft_strlen(s))							// wenn die Länge len größer ist als der eigentliche string
		len = ft_strlen(s);
	if (start >= ft_strlen(s))						// wenn der start Index hinter dem eigenlichen string liegt				
	{
		substr = (char *)malloc(1);
		if (substr == NULL)
			return (NULL);
		substr[0] = '\0';
		return (substr);
	}
	substr = (char *)malloc(len + 1);
	if (substr == NULL)
		return (NULL);
	while (i++ < start)								// i war 0 und wird zu dem Start index hochgezählt
		s++;
	ft_strlcpy(substr, s, len + 1);					// in strlcpy erfolgt immer null terminierung
	return (substr);
}
