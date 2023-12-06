/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 09:04:25 by emimenza          #+#    #+#             */
/*   Updated: 2023/11/09 16:45:57 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printchar(int c, int *length)
{
	if (*length == -1)
		return ;
	if (write(1, &c, 1) == -1)
	{
		*length = -1;
		return ;
	}
	*length += 1;
}

void	ft_printstring(char *str, int *length)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		ft_printstring("(null)", length);
		return ;
	}
	while (str[i])
	{
		ft_printchar(str[i], length);
		i++;
	}
}

void	ft_printu(unsigned int nb, int *len)
{
	if (nb >= 10)
	{
		ft_printnbr(nb / 10, len);
		ft_printnbr(nb % 10, len);
	}
	else
		ft_printchar(nb + 48, len);
}

void	ft_printnbr(int nb, int *len)
{
	if (nb == -2147483648)
		ft_printstring("-2147483648", len);
	else if (nb < 0)
	{
		ft_printchar('-', len);
		ft_printnbr(-nb, len);
	}
	if (nb >= 10)
	{
		ft_printnbr(nb / 10, len);
		ft_printnbr(nb % 10, len);
	}
	else if (nb >= 0)
		ft_printchar(nb + 48, len);
}
