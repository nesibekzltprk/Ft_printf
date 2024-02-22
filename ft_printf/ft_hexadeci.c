/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadeci.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akizilto <akizilto@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 15:28:18 by akizilto          #+#    #+#             */
/*   Updated: 2023/11/28 19:28:00 by akizilto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexadeci(unsigned int num, char c)
{
	char	*a;
	char	*b;
	int		len;

	len = 0;
	a = "0123456789abcdef";
	b = "0123456789ABCDEF";
	if (num > 15)
	{
		len += ft_hexadeci(num / 16, c);
		len += ft_hexadeci(num % 16, c);
	}
	else
	{
		if (c == 'x')
			len += ft_printcharacter(a[num]);
		else if (c == 'X')
			len += ft_printcharacter(b[num]);
	}
	return (len);
}
