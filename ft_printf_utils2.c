/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-pinh <sde-pinh@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 08:27:19 by sde-pinh          #+#    #+#             */
/*   Updated: 2022/07/11 08:34:22 by sde-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putpointhex(unsigned long int h, char *hex)
{
	int	counter;

	counter = 0;
	if (h >= 16)
	{
		counter += ft_putpointhex (h / 16, hex);
	}
	counter += ft_putchar(hex[h % 16]);
	return (counter);
}
