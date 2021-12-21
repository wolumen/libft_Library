/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborgard <dborgard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 08:39:36 by dborgard          #+#    #+#             */
/*   Updated: 2021/11/24 08:39:36 by dborgard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_char(char c, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static char	*ft_trim(const char *s1, const char *set, size_t i)
{
	size_t	k;
	size_t	j;
	size_t	len;
	char	*dst;

	len = ft_strlen(s1);
	j = 0;
	while (ft_char(s1[len - j - 1], set))
		j++;
	dst = ft_calloc(sizeof(char), len - (j + i) + 1);
	if (!dst)
		return (NULL);
	k = 0;
	while (k < len - (j + i))
	{
		dst[k] = s1[i + k];
		k++;
	}
	dst[k] = '\0';
	return (dst);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	i;
	char	*dst;

	if (s1 == NULL)
		return (NULL);
	i = 0;
	while (ft_char(s1[i], set))
		i++;
	dst = ft_trim(s1, set, i);
	return (dst);
}
