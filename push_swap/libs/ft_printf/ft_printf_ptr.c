/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 12:12:40 by emimenza          #+#    #+#             */
/*   Updated: 2023/10/18 11:33:17 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printptr(unsigned long long int ptr, int *len)
{
	ft_printchar('0', len);
	ft_printchar('x', len);
	if (ptr == 0)
		ft_printchar('0', len);
	else
		ft_printnbr_base_ptr(ptr, "0123456789abcdef", len);
}

void	ft_printnbr_base_ptr(uintptr_t nbr, char *base, int *len)
{
	if (nbr >= 16)
	{
		ft_printnbr_base_ptr(nbr / 16, base, len);
		ft_printnbr_base_ptr(nbr % 16, base, len);
	}
	else
		ft_printchar(base[nbr], len);
}
