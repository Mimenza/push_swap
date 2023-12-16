/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   06_move_stack_a.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 19:26:43 by emimenza          #+#    #+#             */
/*   Updated: 2023/12/16 16:20:57 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

static void	ft_rotate_both(t_node **a, t_node **b, t_node *cheap)
{
	while (*a != cheap && *b != cheap->target)
		rr(a, b, 1);
	ft_set_index(*a);
	ft_set_index(*b);
}

static	void	ft_rev_rotate_both(t_node **a, t_node **b, t_node *cheap)
{
	while (*a != cheap && *b != cheap->target)
		rrr(a, b, 1);
	ft_set_index(*a);
	ft_set_index(*b);
}

static void	ft_check_push(t_node **stack, t_node *push_node, int stack_name)
{
	while (*stack != push_node)
	{
		if (stack_name == 'A')
		{
			if (push_node->above_mid == 1)
				ra(stack, 1);
			else
				rra(stack, 1);
		}
		else
		{
			if (push_node->above_mid == 1)
				rb(stack, 1);
			else
				rrb(stack, 1);
		}
	}
}

static t_node	*ft_get_cheapest(t_node *stack)
{
	while (stack)
	{
		if (stack->cheapest == 1)
			return (stack);
		stack = stack->next;
	}
	return (stack);
}

void	ft_move_stack_a(t_node **a, t_node **b)
{
	t_node	*cheapest;

	cheapest = ft_get_cheapest(*a);
	if ((cheapest->above_mid == 1) && (cheapest->target->above_mid == 1))
		ft_rotate_both(a, b, cheapest);
	else if ((cheapest->above_mid == 0) && (cheapest->target->above_mid == 0))
		ft_rev_rotate_both(a, b, cheapest);
	ft_check_push(a, cheapest, 'A');
	ft_check_push(b, cheapest->target, 'B');
	pb(a, b, 1);
}
