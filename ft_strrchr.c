/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpreissn <jpreissn@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 17:34:39 by jpreissn          #+#    #+#             */
/*   Updated: 2021/11/23 17:34:39 by jpreissn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)		// reverse - returns a pointer to the last occurrence of c in str
{
	int	i;

	i = ft_strlen((char *)str);
	while (i != -1)								// Steffen, geht i = 0 hier durch? ja weil true?
	{
		if ((unsigned char)*(str + i) == c)		// Steffen, geht statt str + i nicht auch str[i]?
			return ((char *)(str + i));			// returns a pointer to the last occurrence of c in str
		i--;
	}
	return (NULL);
}
