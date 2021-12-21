/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brein <brein@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 22:50:40 by brein             #+#    #+#             */
/*   Updated: 2021/06/14 19:17:29 by brein            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace_local(char c)
{
	if (c == '\t' || c == '\n' || c == '\r' || c == '\f' || c == '\v'
		|| c == ' ')
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	char	*temp;
	long	number;
	long	negative;

	number = 0;
	temp = (char *) str;
	negative = 1;
	while (ft_isspace_local(*temp))
		temp++;
	if (*temp == '+' || *temp == '-')
	{
		if (*temp == '-')
			negative = -1;
		temp++;
	}
	while (*temp <= '9' && *temp >= '0')
	{
		number = (10 * number) + *temp - '0';
		temp++;
	}
	return (number * negative);
}
