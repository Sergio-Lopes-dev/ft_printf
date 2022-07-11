/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-pinh <sde-pinh@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 08:47:26 by sde-pinh          #+#    #+#             */
/*   Updated: 2022/07/11 10:08:59 by sde-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_putstr(char *s);
int	ft_putchar(char c);
int	ft_module(char c, va_list args);
int	ft_printf(const char *s, ...);
int	ft_putnbr(int n);
int	ft_puthex(unsigned int h, char *hex);
int	ft_putunsnbr(unsigned int n);
int	ft_putpointhex(unsigned long int h, char *hex);

#endif
