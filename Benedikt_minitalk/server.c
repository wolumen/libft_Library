/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brein <brein@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 15:24:44 by brein             #+#    #+#             */
/*   Updated: 2021/12/09 10:23:12 by brein            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static void	ft_convert(char *s)
{
	int				exp;
	unsigned char	c;
	size_t			i;

	exp = 1;
	c = 0;
	i = 7;
	while (i > 0)
	{
		c += exp * (s[i] - '0');
		exp *= 2;
		i--;
	}
	write(1, &c, 1);
}

static void	ft_confirm(int sig)
{
	static int	bitcount;
	static char	bits_server[9];

	if (!bitcount)
	{
		bitcount = 0;
		ft_bzero(bits_server, 8);
	}
	if (sig == SIGUSR2)
		bits_server[bitcount] = '0';
	else
		bits_server[bitcount] = '1';
	bitcount++;
	if (bitcount == 8)
	{
		ft_convert(bits_server);
		ft_bzero(bits_server, 8);
		bitcount = 0;
	}
}

int	main(void)
{
	write(1, "Server PID: ", 12);
	write(1, ft_itoa(getpid()), 5);
	write(1, "\n", 1);
	while (1)
	{
		signal(SIGUSR1, ft_confirm);
		signal(SIGUSR2, ft_confirm);
		pause();
	}
	return (0);
}
