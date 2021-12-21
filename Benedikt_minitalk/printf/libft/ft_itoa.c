/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brein <brein@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 08:50:47 by brein             #+#    #+#             */
/*   Updated: 2021/06/16 10:09:12 by brein            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	length(int i)
{
	int	length;

	length = 0;
	if (i == -2147483648)
		return (11);
	if (i < 0)
	{
		length++;
		i = -i;
	}
	if (i == 0)
		return (1);
	while (i > 9)
	{
		i = i / 10;
		length++;
	}
	return (length + 1);
}

static int	int_check(int n, char *arr)
{
	if (n < 0)
	{
		arr[0] = '-';
		n = n * (-1);
	}
	return (n);
}

char	*ft_itoa(int n)
{
	char	*arr;
	int		arr_index;

	if (n == -2147483648)
	{
		return (ft_strdup("-2147483648"));
	}
	arr_index = length(n);
	arr = (char *)malloc(sizeof(char) * (arr_index + 1));
	if (!arr)
		return (NULL);
	arr[arr_index] = '\0';
	n = int_check(n, arr);
	arr_index--;
	while (n > 9)
	{
		arr[arr_index] = (n % 10) + '0';
		n = n / 10;
		arr_index--;
	}
	arr[arr_index] = n + '0';
	return (arr);
}
