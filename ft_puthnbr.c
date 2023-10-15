/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthnbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenyahy <nbenyahy@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 12:20:14 by nbenyahy          #+#    #+#             */
/*   Updated: 2023/10/15 13:34:10 by nbenyahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthnbr(unsigned int nbr, int *len, char form)
{
	char	*base;

	if (form == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (nbr < 16)
	{
		ft_putchar_fd(base[nbr], 1, len);
	}
	else
	{
		ft_puthnbr(nbr / 16, len, form);
		ft_putchar_fd(base[nbr % 16], 1, len);
	}
}

void	ft_puthptr(unsigned long ptr, int *len)
{
	char	*base;

	base = "0123456789abcdef";
	if (ptr < 16)
	{
		ft_putchar_fd(base[ptr], 1, len);
	}
	else
	{
		ft_puthptr(ptr / 16, len);
		ft_putchar_fd(base[ptr % 16], 1, len);
	}
}
