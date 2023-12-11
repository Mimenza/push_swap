/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_init_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 12:20:46 by emimenza          #+#    #+#             */
/*   Updated: 2023/12/11 11:04:57 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

void	ft_add_to_stack(t_node **stack, int nbr)
{
	t_node	*new;
	t_node	*last;

	if (stack == NULL)
		return ;
	new = malloc(sizeof(t_node));
	if (new == NULL)
		return ;
	if (*stack == NULL)
	{
		*stack = new;
		new->prev = NULL;
	}
	else
	{
		last = ft_last_node(*stack);
		last->next = new;
		new->prev = last;
	}
	new->value = nbr;
	new->next = NULL;
}

int	ft_init_stack(t_node **stack, char **argv)
{
	int		i;
	long	nbr;

	i = 0;
	nbr = 0;
	while (argv[i])
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
