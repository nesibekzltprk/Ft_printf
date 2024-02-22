/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unputnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akizilto <akizilto@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 15:44:05 by akizilto          #+#    #+#             */
/*   Updated: 2023/11/28 18:44:12 by akizilto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unputnbr(unsigned int n)
{
	int	length;

	length = 0;
	if (n == 0)
	{
		length += write(1, "0", 1);
	}
	else if (n > 9)
	{
		length += ft_unputnbr(n / 10);
		length += ft_unputnbr(n % 10);
	}
	else
		length += ft_printcharacter(n + '0');
	return (length);
}
