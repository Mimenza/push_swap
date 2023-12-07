/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 12:20:46 by emimenza          #+#    #+#             */
/*   Updated: 2023/12/07 09:31:19 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

int	ft_repeated(t_node *stack, int nbr)
{
	if (stack == NULL)
		return (0);
	while (stack)
	{
		if (stack->value == nbr)
			return (1);
		stack = stack->next;
	}
	return (0);
}

int	ft_init_stack(t_node **stack, char **argv)
{
	int		i;
	long	nbr;

	i = 0;
	nbr = 0;
	while(argv[i])
	{
		nbr = ft_atol(argv[i]);
		if (nbr < INT_MIN || nbr > INT_MAX)
		{
			ft_printf("Nbr must be within the limits.\n");
			ft_free_stack(stack);
			return (0);
		}

		if (ft_repeated(*stack, nbr))
		{
			ft_printf("Cant enter the same nbr twice.\n");
			ft_free_stack(stack);
			return (0);
		}
		ft_add_to_stack(stack, nbr);
		i++;
	}
	return (1);
}