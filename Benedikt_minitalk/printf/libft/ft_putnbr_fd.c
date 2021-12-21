/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brein <brein@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 22:18:16 by brein             #+#    #+#             */
/*   Updated: 2021/06/15 17:43:18 by brein            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	number;
	char	c;

	number = n;
	if (number < 0)
	{
		ft_putchar_fd('-', fd);
		number = number * (-1);
	}
	if (number > 9)
	{
		ft_putnbr_fd((number / 10), fd);
	}
	c = (number % 10) + '0';
	write(fd, &c, 1);
}
