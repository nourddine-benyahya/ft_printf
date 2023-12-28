/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenyahy <nbenyahy@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 16:20:31 by nbenyahy          #+#    #+#             */
/*   Updated: 2023/12/25 08:30:03 by nbenyahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

void	ft_putchar(char c, int *res);
void	ft_putstr(char *s, int *res);
void	ft_putnbr(long long n, int *res);
void	ft_puthexa(unsigned long nbr, char a, int *res);
int		ft_printf(const char *format, ...);

#endif