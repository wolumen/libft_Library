/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brein <brein@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 16:36:52 by brein             #+#    #+#             */
/*   Updated: 2021/08/25 13:18:33 by brein            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdarg.h>
# include "libft/libft.h"

int		ft_printf(const char *format, ...);
int		ft_conversion_selector(va_list input, char format);
int		ft_u_conversion(unsigned int i);
int		ft_d_conversion(int d);
int		ft_c_conversion(int c);
int		ft_s_conversion(char *s);
int		ft_percent_conversion(void);
int		ft_small_x_conversion(unsigned int x);
int		ft_capital_x_conversion(unsigned int x);
int		ft_p_conversion(unsigned long long int x);
int		input_checker(char format);
int		check_percent(const char *format);

#endif
