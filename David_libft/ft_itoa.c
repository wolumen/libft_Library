/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborgard <dborgard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 08:23:56 by dborgard          #+#    #+#             */
/*   Updated: 2021/12/03 11:54:35 by dborgard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(long n, int neg)
{
	int	len;

	if (!n)
		return (1);
	len = 1;
	while (n >= 10)
	{
		len++;
		n = n / 10;
	}
	if (neg)
		len++;
	return (len);
}

static char	*ft_mal(char *ptr, int len)
{
	ptr = malloc((sizeof(char) * (len + 1)));
	if (!ptr)
		return (0);
	return (ptr);
}

static char	*ft_cpy(char *ptr, long nbr, int len, int neg)
{
	if (!nbr)
		ptr[0] = '0';
	ptr[len] = '\0';
	len--;
	while (len > 0)
	{
		ptr[len] = (nbr % 10) + '0';
		nbr = nbr / 10;
		len--;
	}
	if (neg)
		ptr[0] = '-';
	else
		ptr[0] = (nbr % 10) + '0';
	return (ptr);
}

char	*ft_itoa(int n)
{
	long	nbr;
	char	*ptr;
	int		neg;
	int		len;

	nbr = n;
	neg = 0;
	if (nbr < 0)
	{
		nbr = nbr * -1;
		neg = 1;
	}
	ptr = "";
	len = ft_len(nbr, neg);
	ptr = ft_mal(ptr, len);
	ft_cpy(ptr, nbr, len, neg);
	return (ptr);
}
