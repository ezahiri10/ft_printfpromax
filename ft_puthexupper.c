/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexupper.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 23:49:04 by ezahiri           #+#    #+#             */
/*   Updated: 2023/11/26 12:19:48 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexupper(unsigned int n)
{
	int	count;

	count = 0;
	if (n >= 16)
	{
		count += ft_puthexupper(n / 16);
		count += ft_puthexupper(n % 16);
	}
	else if (n < 10)
		count += ft_putchar(n + '0');
	else 
		count += ft_putchar(n + 'A' - 10);
	return (count);
}
