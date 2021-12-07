/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpreissn <jpreissn@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 10:01:32 by jpreissn          #+#    #+#             */
/*   Updated: 2021/11/24 10:01:32 by jpreissn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)		// locates the	first occurrence of the	null-termi-nated 
     																		// string needle in the string haystack, 
																			// where not more than n characters are searched.
																			// Chars after `\0' are not searched.
{
	if (!*haystack && !*needle)
		return (0);
	while (*haystack)
	{
		if (n < ft_strlen(needle))
			break ;													// Steffen was passiert nach break? warumd diese KOndition darüber?
		if (ft_strlen(haystack) < ft_strlen(needle))				// wenn haystack ist kleiner als needle
			break ;
		if (ft_memcmp(haystack, needle, ft_strlen(needle)) == 0)	// memcmp returns 0 wenn gleich also == 0
			return ((char *)haystack);								// Steffen, warum oben memcmp und nicht strcmp?
		n--;
		haystack++;													// Steffen was passiert überhaupt in der Funktion?
	}
	return (NULL);
}

// If little is an empty string, big is returned; if little occurs nowhere in big, NULL is returned; 
// otherwise a pointer to the first	character of the first occurrence of little is returned.