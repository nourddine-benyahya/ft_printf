/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenyahy <nbenyahy@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 12:20:14 by nbenyahy          #+#    #+#             */
/*   Updated: 2023/10/15 13:37:25 by nbenyahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_handl(char a, va_list args, int *len)
{
	if (a == 's')
		ft_putstr_fd(va_arg(args, char *), 1, len);
	else if (a == 'c')
		ft_putchar_fd(va_arg(args, int), 1, len);
	else if (a == 'd' || a == 'i')
		ft_putnbr(va_arg(args, int), len);
	else if (a == 'u')
		ft_putunbr(va_arg(args, unsigned int), len);
	else if (a == 'x' || a == 'X')
		ft_puthnbr(va_arg(args, unsigned int), len, a);
	else if (a == '%')
		ft_putchar_fd('%', 1, len);
	else if (a == 'p')
		ft_putaddr(va_arg(args, unsigned long long int), len);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			ft_handl(format[i + 1], args, &len);
			i++;
		}
		else
		{
			ft_putchar_fd(format[i], 1, &len);
		}
		i++;
	}
	va_end(args);
	return (len);
}
