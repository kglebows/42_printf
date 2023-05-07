/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_n.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 17:19:58 by kglebows          #+#    #+#             */
/*   Updated: 2023/05/07 17:04:45 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_countnumbers(int n)
{
	int	i;

	i = 0;
	if (n == -2147483648)
		return (11);
	if (n <= 0)
		i++;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

int	ft_printf_n(int n)
{
	int	printed;

	printed = ft_countnumbers(n);
	ft_putnbr_fd(n, 1);
	return (printed);
}
//