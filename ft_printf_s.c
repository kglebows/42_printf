/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 17:19:58 by kglebows          #+#    #+#             */
/*   Updated: 2023/05/08 12:19:54 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_s(char *str)
{
	int	str_len;

	if (!str)
	{
		ft_putstr_fd("(null)", 1);
		return (6);
	}
	str_len = ft_strlen(str);
	ft_putstr_fd(str, 1);
	return (str_len);
}
