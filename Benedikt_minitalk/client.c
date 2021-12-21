/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpreissn <jpreissn@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 15:24:31 by brein             #+#    #+#             */
/*   Updated: 2021/12/16 10:52:22 by jpreissn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static void	ft_send_msg(int pid, char *s)
{
	while (*s != '\0')
	{
		if (*s == '1')
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		s++;
		usleep(400);
	}
}

static char	*ft_to_bit(char s, char *bits)
{
	int		count;
	int		ascii_nr;

	ft_bzero(bits, 8);
	ascii_nr = s;
	count = 7;
	while (ascii_nr > 0)
	{
		bits[count] = (ascii_nr % 2) + '0';
		ascii_nr /= 2;
		count--;
	}
	while (count >= 0)
		bits[count--] = '0';
	return (bits);
}

int	main(int argc, char **argv)
{
	int		pid;
	char	*bits;
	int		i;

	bits = ft_calloc(9, sizeof(char));
	if (bits == NULL)
	{
		write(1, "allocation went wrong\n", 22);
		return (0);
	}
	i = 0;
	if (argc != 3)
	{
		write(1, "wrong number of arguments\n", 26);
		return (0);
	}
	pid = ft_atoi(argv[1]);
	while (argv[2][i] != '\0')
	{
		ft_to_bit(argv[2][i], bits);
		ft_send_msg(pid, bits);
		i++;
	}
	free(bits);
	return (0);
}
