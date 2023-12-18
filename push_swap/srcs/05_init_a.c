/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_init_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 11:17:49 by emimenza          #+#    #+#             */
/*   Updated: 2023/12/18 13:51:45 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

static void	ft_set_target_a(t_node *a, t_node *b)
{
	while (a)
	{
		a->target = ft_find_max(b, a->value);
		if (a->target == NULL)
			a->target = ft_find_max(b, INT32_MAX);
		a = a->next;
	}
}

static int	calculate_cost_a(t_node *node, t_node *a_start)
{
	int	cost;

	cost = 0;
	if (node->index == node->target->index)
	{
		if (node->above_mid == 1)
			cost += node->index;
		else
			cost += ft_stack_len(a_start) - node->index;
	}
	else
	{
		if (node->above_mid == 1)
			cost += node->index;
		else
			cost += ft_stack_len(a_start) - node->index;
		if (node->target->above_mid == 1)
			cost += node->target->index;
		else
			cost += ft_stack_len(a_start) - node->target->index;
	}
	return (cost);
}

static void	ft_get_cost_a(t_node *a, t_node *b)
{
	int		cost;
	t_node	*a_start;

	a_start = a;
	cost = 0;
	while (a)
	{
		cost = calculate_cost_a(a, a_start);
		a->cost = cost;
		a = a->next;
	}
}

static void	ft_set_cheapest_a(t_node *a)
{
	t_node	*cheapest;
	t_node	*current;

	current = a;
	cheapest = a;
	while (current)
	{
		if (current->cost < cheapest->cost)
			cheapest = current;
		current = current->next;
	}
	current = a;
	while (current)
	{
		current->cheapest = (current == cheapest);
		current = current->next;
	}
}

void	ft_init_stack_a(t_node *a, t_node *b)
{
	ft_set_index(a);
	ft_set_index(b);
	ft_set_target_a(a, b);
	ft_get_cost_a(a, b);
	ft_set_cheapest_a(a);
}
