/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenyahy <nbenyahy@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 12:20:14 by nbenyahy          #+#    #+#             */
/*   Updated: 2023/10/14 21:23:47 by nbenyahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int nbr, int *len)
{
	if (nbr == -2147483648)
		ft_putstr_fd("-2147483648", 1, len);
	else if (nbr < 0)
	{
		ft_putchar_fd('-', 1, len);
		ft_putnbr(nbr * -1, len);
	}
	else if (nbr < 10)
		ft_putchar_fd(nbr + '0', 1, len);
	else
	{
		ft_putnbr(nbr / 10, len);
		ft_putchar_fd(nbr % 10 + '0', 1, len);
	}
}
