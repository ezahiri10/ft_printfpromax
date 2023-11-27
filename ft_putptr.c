/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 22:57:41 by ezahiri           #+#    #+#             */
/*   Updated: 2023/11/26 17:00:36 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	count_nbr(unsigned long n)
{
	int	count;

	count = 0;
	while (n != 0)
	{
		count++;
		n /= 16;
	}
	return (count);
}

static void	check(unsigned long n)
{
	if (n >= 16)
	{
		check(n / 16);
		check(n % 16);
	}
	else if (n < 10)
		ft_putchar(n + '0');
	else
		ft_putchar(n + 'a' - 10);
}

int	ft_putptr(unsigned long n)
{
	int	count;

	count = 0;
	count += write(1, "0x", 2);
	if (n == 0)
		count += write(1, "0", 1);
	else
	{
		check(n);
		count += count_nbr(n);
	}
	return (count);
}
