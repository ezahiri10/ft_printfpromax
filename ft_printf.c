/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 20:11:50 by ezahiri           #+#    #+#             */
/*   Updated: 2023/11/27 22:31:01 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	check_format(char c, va_list arg)
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
		count += ft_puthexlower(va_arg(arg, unsigned int));
	else if (c == 'X')
		count += ft_puthexupper(va_arg(arg, unsigned int));
	else if (c == 'p')
		count += ft_putptr(va_arg(arg, unsigned long));
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

	count = 0;
	va_start(arg, s);
	if (write(1, "", 0) == -1)
		return (-1);
	while (*s)
	{
		if (*s == '%')
		{
			s++;
			if (*s == '\0')
			{
				va_end(arg);
				return (count);
			}
			count += check_format(*s, arg);
		}
		else
			count += ft_putchar(*s);
		s++;
	}
	va_end(arg);
	return (count);
}
int main ()
{
	printf("%d\n", ft_printf("hello %p%%%%", (void *)12));
	printf("%d\n", printf("hello %p%%%%", (void *)12));
	
}
