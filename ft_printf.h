/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 15:49:07 by ezahiri           #+#    #+#             */
/*   Updated: 2023/11/27 21:01:30 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

int	ft_putchar(int c);
int	ft_putstr(char *str);
int	ft_putnbr(long n);
int	ft_puthexlower(unsigned int n);
int	ft_puthexupper(unsigned int n);
int	ft_putptr(unsigned long n);
int	ft_printf(const char *s, ...);

#endif