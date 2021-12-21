/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversions_2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brein <brein@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 12:01:37 by brein             #+#    #+#             */
/*   Updated: 2021/08/24 16:40:11 by brein            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_small_x_conversion(unsigned int x)
{
	char	hexa[20];
	char	return_value[20];
	int		i;
	int		j;
	long	remainder;

	i = 0;
	j = -1;
	ft_bzero(hexa, 20);
	ft_bzero(return_value, 20);
	if (x == 0)
		return (write(1, "0", 1));
	while (x != 0)
	{
		if (x % 16 < 10)
			hexa[i++] = 48 + (x % 16);
		else
			hexa[i++] = 87 + (x % 16);
		x = x / 16;
	}
	while (i >= 0)
		return_value[j++] = hexa[i--];
	remainder = 0;
	remainder += write(1, return_value, j);
	return (remainder);
}

int	ft_capital_x_conversion(unsigned int x)
{
	char	hexa[20];
	char	return_value[20];
	int		i;
	int		j;
	long	remainder;

	i = 0;
	j = -1;
	ft_bzero(hexa, 20);
	ft_bzero(return_value, 20);
	if (x == 0)
		return (write(1, "0", 1));
	while (x != 0)
	{
		if (x % 16 < 10)
			hexa[i++] = 48 + (x % 16);
		else
			hexa[i++] = 55 + (x % 16);
		x = x / 16;
	}
	while (i >= 0)
		return_value[j++] = hexa[i--];
	remainder = 0;
	remainder += write(1, return_value, j);
	return (remainder);
}

int	ft_percent_conversion(void)
{
	return (write(1, "%", 1));
}
