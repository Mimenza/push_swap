/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:25:14 by emimenza          #+#    #+#             */
/*   Updated: 2023/12/06 13:10:41 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	number;
	int	sign;
	int	i;

	number = 0;
	sign = 1;
	i = 0;
	while (*(str + i) == 32 || (*(str + i) >= 9 && *(str + i) <= 13))
		i++;
	if (*(str + i) == '-')
		sign = -1;
	if (*(str + i) == '+' || *(str + i) == '-')
		i++;
	while (*(str + i) >= '0' && *(str + i) <= '9')
	{
		number = number * 10 + (*(str + i) - 48);
		i++;
	}
	return (number * sign);
}

long	ft_atol(const char *str)
{
	long	number;
	int		sign;
	int		i;

	number = 0;
	sign = 1;
	i = 0;
	while (*(str + i) == 32 || (*(str + i) >= 9 && *(str + i) <= 13))
		i++;
	if (*(str + i) == '-')
		sign = -1;
	if (*(str + i) == '+' || *(str + i) == '-')
		i++;
	while (*(str + i) >= '0' && *(str + i) <= '9')
	{
		number = number * 10 + (*(str + i) - 48);
		i++;
	}
	return (number * sign);
}

// #include <stdio.h>
// #include <stdlib.h>
// int	main(void)
// {
// 	char *s	= "-+--234s234";

// 	printf("%d %d", ft_atoi(s), atoi(s));
// 	return (0);
// }