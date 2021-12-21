/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborgard <dborgard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 10:36:10 by dborgard          #+#    #+#             */
/*   Updated: 2021/11/19 10:36:10 by dborgard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long	i;
	long	tmp;
	int		multi;

	i = 0;
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
		i++;
	multi = 1;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			multi = -1;
		i++;
	}
	tmp = 0;
	while (ft_isdigit(str[i]))
	{
		tmp = (tmp * 10) + (str[i] - 48);
		i++;
	}
	return (tmp * multi);
}
