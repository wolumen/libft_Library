/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brein <brein@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 16:38:21 by brein             #+#    #+#             */
/*   Updated: 2021/08/26 20:11:17 by brein            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_conversion_selector(va_list input, char format)
{
	if (format == 'u')
		return (ft_u_conversion(va_arg(input, unsigned int)));
	if (format == 'd' || format == 'i')
		return (ft_d_conversion(va_arg(input, int)));
	if (format == 'c')
		return (ft_c_conversion(va_arg(input, int)));
	if (format == 's')
		return (ft_s_conversion(va_arg(input, char *)));
	if (format == 'p')
		return (ft_p_conversion(va_arg(input, long long int)));
	if (format == 'x')
		return (ft_small_x_conversion(va_arg(input, unsigned int)));
	if (format == 'X')
		return (ft_capital_x_conversion(va_arg(input, unsigned int)));
	if (format == '%')
		return (ft_percent_conversion());
	return (0);
}

int	input_checker(char format)
{
	if (format == 'u' || format == 'd' || format == 'i' || format == 'c'
		|| format == 's' || format == 'p' || format == 'x' || format == 'X'
		|| format == '%')
		return (0);
	else if (format == ' ')
		return (1);
	else
		return (-1);
}

int	check_percent(const char *format)
{
	while (*format == ' ')
		format++;
	if (*format == '%')
		return (0);
	return (write(1, " ", 1));
}

int	ret_check(int ret, va_list input)
{
	va_end(input);
	if (ret < 0)
		return (-1);
	return (ret);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		ret;
	va_list	input;

	va_start(input, format);
	i = -1;
	ret = 0;
	while (format[++i] && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (input_checker(format[i + 1]) == -1)
				ret = -99999999;
			if (input_checker(format[i + 1]) == 1)
			{
				ret += check_percent(&format[i + 1]);
				while (format[i + 1] == ' ')
					i++;
			}
			ret += ft_conversion_selector(input, format[i++ + 1]);
		}
		else
			ret += write(1, &format[i], 1);
	}
	return (ret_check(ret, input));
}
