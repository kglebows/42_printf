/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 17:44:12 by kglebows          #+#    #+#             */
/*   Updated: 2023/05/07 17:07:36 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>

int	ft_printf(const char *str, ...);
int	ft_printf_c(char c);
int	ft_printf_s(char *str);
int	ft_printf_n(int n);
int	ft_printf_x(unsigned long int n, int flag);
int	ft_printf_p(unsigned long int ptr);
int	ft_printf_u(unsigned int n);

#endif