/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 17:19:58 by kglebows          #+#    #+#             */
/*   Updated: 2023/05/07 19:54:06 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_counthex(unsigned long int n)
{
	int	i;

	i = 1;
	while (n >= 16)
	{
		n /= 16;
		i++;
	}
	return (i);
}

int	ft_printf_x(unsigned long int n, int flag)
{
	int		printed;
	int		i;
	char	*hex;
	char	c_flag;

	if (flag == 0)
		c_flag = 'a' - 10;
	else
		c_flag = 'A' - 10;
	i = ft_counthex(n);
	hex = calloc(i + 1, sizeof(char));
	if (!hex)
		return (0);
	while (i)
	{
		i--;
		if ((n % 16) < 10)
			hex[i] = (n % 16) + '0';
		else
			hex[i] = (n % 16) + c_flag;
		n /= 16;
	}
	printed = ft_printf_s(hex);
	free(hex);
	return (printed);
}
//