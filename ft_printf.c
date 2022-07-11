/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-pinh <sde-pinh@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 15:19:23 by sde-pinh          #+#    #+#             */
/*   Updated: 2022/07/11 10:09:42 by sde-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_module(char c, va_list args)
{
	if (c == 'c')
		return (ft_putchar(va_arg (args, int)));
	if (c == 's')
		return (ft_putstr(va_arg(args, char *)));
	if (c == 'p')
	{
		write (1, "0x", 2);
		return (ft_putpointhex(va_arg(args, unsigned long int),
				"0123456789abcdef") + 2);
	}
	if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(args, int)));
	if (c == 'u')
		return (ft_putunsnbr(va_arg(args, unsigned int)));
	if (c == 'x')
		return (ft_puthex(va_arg(args, unsigned long), "0123456789abcdef"));
	if (c == 'X')
		return (ft_puthex(va_arg(args, unsigned long), "0123456789ABCDEF"));
	if (c == '%')
		return (write (1, "%", 1));
	return (0);
}

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		count;

	va_start (args, s);
	count = 0;
	while (*s != '\0')
	{
		if (*s == '%')
		{
			count += ft_module(*++s, args);
			s++;
		}
		else
		{
			write (1, &*s, 1);
			count++;
			s++;
		}
	}
	va_end (args);
	return (count);
}
