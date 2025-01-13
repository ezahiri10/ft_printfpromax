/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 09:27:50 by ezahiri           #+#    #+#             */
/*   Updated: 2025/01/13 10:44:42 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	check_space(const char *s)
{
	if (*s == 32 )
		s++;
}

int	check_for(va_list arg, char c)
{
	int	count;

	count = 0;
	if (c == 'c')
		count += ft_putchar(va_arg(arg, int));
	else if (c == 's')
		count += ft_putstr(va_arg(arg, char *));
	else if (c == 'd' || c == 'i')
		count += ft_putnbr(va_arg(arg, int));
	else if (c == 'u')
		count += ft_putnbr(va_arg(arg, unsigned int));
	else if (c == 'x')
		count += ft_puthex(va_arg(arg, unsigned int), 'a');
	else if (c == 'X')
		count += ft_puthex(va_arg(arg, unsigned int), 'A');
	else if (c == 'p')
		count += ft_putptr(va_arg(arg, unsigned long), 0);
	else if (c == '%')
		count += ft_putchar('%');
	else
		count += ft_putchar(c);
	return (count);
}

int	ft_printf(const char *s, ...)
{
	va_list	arg;
	int		count;

	va_start(arg, s);
	count = 0;
	if (write(1, "", 0) == -1)
		return (-1);
	while (*s)
	{
		if (*s == '%')
		{
			s++;
			count += check_for(arg, *s);
		}
		else
			count += ft_putchar(*s);
		s++;
	}
	return (count);
}
