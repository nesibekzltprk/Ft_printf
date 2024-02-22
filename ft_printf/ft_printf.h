/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akizilto <akizilto@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 15:59:57 by akizilto          #+#    #+#             */
/*   Updated: 2023/11/28 19:17:59 by akizilto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_ptr(unsigned long num);
int	ft_hexadeci(unsigned int num, char c);
int	ft_printcharacter(int c);
int	ft_formats(va_list args, const char format);
int	ft_printf(const char *str, ...);
int	ft_printstr(char *str);
int	ft_putnbr(int n);
int	ft_unputnbr(unsigned int n);

#endif
