/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils1.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-pinh <sde-pinh@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 15:29:55 by sde-pinh          #+#    #+#             */
/*   Updated: 2022/07/11 12:11:02 by sde-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putchar(char c)
{
	return (write (1, &c, 1));
}

int	ft_putstr(char *s)
{
	int	count;

	count = 0;
	if (!s)
		return (write (1, "(null)", 6));
	while (s[count] != '\0')
	{
		write (1, &s[count], 1);
		count++;
	}
	return (count);
}

int	ft_putnbr(int n)
{
	long int	a;
	int			counter;

	counter = 0;
	a = n;
	if (a < 0)
	{
		counter += ft_putchar('-');
		a = -a;
	}
	if (a > 9)
	{
		counter += ft_putnbr(a / 10);
		counter += ft_putnbr(a % 10);
	}
	else
		counter += ft_putchar(a + '0');
	return (counter);
}

int	ft_puthex(unsigned int h, char *hex)
{
	int		counter;

	counter = 0;
	if (h >= 16)
	{
		counter += ft_puthex (h / 16, hex);
	}
	counter += ft_putchar(hex[h % 16]);
	return (counter);
}

int	ft_putunsnbr(unsigned int n)
{
	unsigned long int	a;
	int					counter;

	counter = 0;
	a = n;
	if (a > 9)
	{
		counter += ft_putnbr(a / 10);
		counter += ft_putnbr(a % 10);
	}
	else
		counter += ft_putchar(a + '0');
	return (counter);
}
