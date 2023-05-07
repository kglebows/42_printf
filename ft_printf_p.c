/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 17:19:58 by kglebows          #+#    #+#             */
/*   Updated: 2023/05/03 18:55:38 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_p(unsigned long int ptr)
{
	int	printed;

	write(1, "0x", 2);
	printed = ft_printf_x(ptr, 0);
	if (printed == -1)
		return (-1);
	else
		printed += 2;
	return (printed);
}
