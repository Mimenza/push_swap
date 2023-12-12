/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   07_init_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 09:22:45 by emimenza          #+#    #+#             */
/*   Updated: 2023/12/12 09:35:24 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

static void	ft_set_target_b(t_node *a, t_node *b)
{
	while (b)
	{
		b->target = ft_find_min(a, b->value);
		if (b->target == NULL)
			b->target = ft_find_min(a, INT_MIN);
		b = b->next;
	}
}

static void	ft_get_cost_b(t_node *a, t_node *b)
{
	int		cost;
	t_node	*b_start;

	b_start = b;
	cost = 0;
	while (b)
	{
		cost = 0;
		
		if (b->index == b->target->index)
		{
			if (b->above_mid == 1)
				cost += b->index;
			else
				cost += ft_stack_len(b_start) - b->index;
		}
		else
		{
			if (b->above_mid == 1)
				cost += b->index;
			else
				cost += ft_stack_len(b_start) - b->index;
			if (b->target->above_mid == 1)
				cost += b->target->index;
			else
				cost += ft_stack_len(a) - b->target->index;
		}
		b->cost = cost;
		b = b->next;
	}
}

static void	ft_set_cheapest_b(t_node *b)
{
	t_node *cheapest;
	t_node	*current;

	current = b;
	cheapest = b;
	while (current)
	{
		if (current->cost < cheapest->cost)
			cheapest = current;
		current = current->next;
	}	
	current = b;
	while (current)
	{
		current->cheapest = (current == cheapest) ? 1 : 0;
		current = current->next;
	}
}

void	ft_init_stack_b(t_node *a, t_node *b)
{
	ft_set_index(a);
	ft_set_index(b);
	ft_set_target_b(a, b);
	ft_get_cost_b(a, b);
	ft_set_cheapest_b(b);
}