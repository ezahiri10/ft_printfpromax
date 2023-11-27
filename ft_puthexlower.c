/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexlower.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 18:30:59 by ezahiri           #+#    #+#             */
/*   Updated: 2023/11/26 13:22:10 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexlower(unsigned int n)
{
	int	count;

	count = 0;
	if (n >= 16)
	{
		count += ft_puthexlower(n / 16);
		count += ft_puthexlower(n % 16);
	}
	else if (n < 10)
		count += ft_putchar(n + '0');
	else
		count += ft_putchar(n + 'a' - 10);
	return (count);
}
