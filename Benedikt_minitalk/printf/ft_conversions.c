/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brein <brein@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 12:02:55 by brein             #+#    #+#             */
/*   Updated: 2021/08/25 10:44:23 by brein            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_u_conversion(unsigned int n)
{
	char			arr[20];
	int				arr_index;
	unsigned int	tmp;
	int				arr_index_backup;

	tmp = n;
	arr_index = 0;
	if (tmp == 0)
		return (write(1, "0", 1));
	while (tmp > 9)
	{
		tmp = tmp / 10;
		arr_index++;
	}
	arr[++arr_index] = '\0';
	arr_index_backup = arr_index;
	arr_index--;
	while (n > 9)
	{
		arr[arr_index] = (n % 10) + '0';
		n = n / 10;
		arr_index--;
	}
	arr[arr_index] = n + '0';
	return (write(1, arr, arr_index_backup));
}

int	ft_d_conversion(int d)
{
	char	*array;
	int		j;

	array = ft_itoa(d);
	j = ft_strlen(array);
	write(1, array, j);
	free(array);
	return (j);
}

int	ft_c_conversion(int c)
{
	return (write(1, &c, 1));
}

int	ft_s_conversion(char *s)
{
	char	*str;
	int		i;

	if (s == NULL)
		return (write(1, "(null)", 6));
	str = ft_strdup(s);
	i = write(1, str, ft_strlen(str));
	free(str);
	return (i);
}

int	ft_p_conversion(unsigned long long int x)
{
	char	hexa[30];
	char	return_value[30];
	int		i;
	int		j;
	int		remainder;

	i = 0;
	j = -1;
	ft_bzero(hexa, 30);
	if (x == 0)
		return (write(1, "0x0", 3));
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
	return_value[j] = '\0';
	remainder = write(1, "0x", 2);
	remainder += write(1, return_value, j);
	return (remainder);
}
