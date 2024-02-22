/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akizilto <akizilto@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 18:27:19 by akizilto          #+#    #+#             */
/*   Updated: 2023/12/05 20:18:41 by akizilto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printcharacter(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_formats(va_list args, const char format)
{
	int	length;

	length = 0;
	if (format == 'c')
		length += ft_printcharacter(va_arg(args, int));
	else if (format == 's')
		length += ft_printstr(va_arg(args, char *));
	else if (format == 'p')
	{
		length += write(1, "0x", 2);
		length += ft_ptr(va_arg(args, unsigned long));
	}
	else if (format == 'd' || format == 'i')
		length += ft_putnbr(va_arg(args, int));
	else if (format == 'u')
		length += ft_unputnbr(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		length += ft_hexadeci(va_arg(args, unsigned int), format);
	else if (format == '%')
		length += ft_printcharacter('%');
	return (length);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	args;
	int		length;

	length = 0;
	i = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1] != '\0')
		{
			i++;
			length += ft_formats(args, str[i]);
		}
		else
			length += ft_printcharacter(str[i]);
		i++;
	}
	va_end(args);
	return (length);
}
