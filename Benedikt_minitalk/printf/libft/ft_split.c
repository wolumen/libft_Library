/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brein <brein@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 16:35:44 by brein             #+#    #+#             */
/*   Updated: 2021/06/14 20:55:49 by brein            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	array_length(char const *s, char c)
{
	size_t	len;
	size_t	s_index;

	len = 0;
	s_index = 0;
	if (s[s_index] != c && s[s_index] != 0)
	{
		len++;
		s_index++;
	}
	while (s[s_index] != 0)
	{
		if (s[s_index] != c && s[s_index - 1] == c)
			len++;
		s_index++;
	}
	return (len + 1);
}

static char	*substr(char const *s, char c, char *array, size_t i)
{
	char	*sub_str;
	size_t	s_index;

	s_index = 0;
	sub_str = array;
	sub_str = ft_calloc(sizeof(char), i + 1);
	if (!sub_str)
		return (0);
	while (s[s_index] != c && s[s_index] != '\0')
	{
		sub_str[s_index] = s[s_index];
		s_index++;
	}
	sub_str[s_index] = '\0';
	return (sub_str);
}

static int	s_check(char const *s)
{
	if (s == NULL)
		return (0);
	return (1);
}

char	**ft_split(char const *s, char c)
{
	unsigned int	i;
	unsigned int	j;
	char			**array;

	s_check(s);
	array = (char **)malloc(sizeof(char *) * array_length(s, c));
	if (! array)
		return (NULL);
	j = 0;
	while (*s != 0)
	{
		i = 0;
		while (s[i] != c && s[i] != 0)
			i++;
		if (i)
		{
			array[j] = substr(s, c, array[j], i);
			s = &s[i];
			j++;
		}
		else
			s++;
	}
	array[j] = NULL;
	return (array);
}
