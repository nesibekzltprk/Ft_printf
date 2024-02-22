/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akizilto <akizilto@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 14:54:46 by akizilto          #+#    #+#             */
/*   Updated: 2023/11/28 18:35:48 by akizilto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ptr(unsigned long num)
{
	int		len;
	char	*p;

	len = 0;
	p = "0123456789abcdef";
	if (num > 15)
	{
		len += ft_ptr(num / 16);
		len += ft_ptr(num % 16);
	}
	else
	{
		len += ft_printcharacter(p[num]);
	}
	return (len);
}
