/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_init_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 11:17:49 by emimenza          #+#    #+#             */
/*   Updated: 2023/12/14 15:54:16 by emimenza         ###   ########.fr       */
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

static void	ft_get_cost_a_aux(t_node *a, t_node *b, int *cost, t_node *a_start)
{
	if (a->index == a->target->index)
	{
		if (a->above_mid == 1)
			cost += a->index;
		else
			cost += ft_stack_len(a_start) - a->index;
	}
	else
	{
		if (a->above_mid == 1)
			cost += a->index;
		else
			cost += ft_stack_len(a_start) - a->index;
		if (a->target->above_mid == 1)
			cost += a->target->index;
		else
			cost += ft_stack_len(b) - a->target->index;
	}
}

static void	ft_get_cost_a(t_node *a, t_node *b)
{
	int		cost;
	t_node	*a_start;

	a_start = a;
	cost = 0;
	while (a)
	{
		cost = 0;
		ft_get_cost_a_aux(a, b, &cost, a_start);
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
