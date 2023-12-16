/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   08_move_stack_b.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 09:40:29 by emimenza          #+#    #+#             */
/*   Updated: 2023/12/16 16:21:16 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

static void	ft_check_push(t_node **stack, t_node *push_node, int stack_name)
{
	while (*stack != push_node)
	{
		if (stack_name == 'B')
		{
			if (1 == push_node->above_mid)
				rb(stack, 1);
			else
				rrb(stack, 1);
		}
		else
		{
			if (1 == push_node->above_mid)
				ra(stack, 1);
			else
				rra(stack, 1);
		}
	}
}

void	ft_move_stack_b(t_node **a, t_node **b)
{
	ft_check_push(a, (*b)->target, 'A');
	pa(a, b, 1);
}
