/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_init_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 11:17:49 by emimenza          #+#    #+#             */
/*   Updated: 2023/12/11 20:50:42 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

void	ft_set_index(t_node *stack)
{
	int	i;
	int	mid;

	mid = ft_stack_len(stack) / 2;
	i = 0;
	while (stack)
	{
		(stack)->index = i;
		if (i > mid)
			(stack)->above_mid = 0;
		else if (i == mid)
		{
			if(mid % 2 == 0)
				(stack)->above_mid = 0;
			else
				(stack)->above_mid = 1;
		}
		else
			(stack)->above_mid = 1;
		i++;
		(stack) = (stack)->next;
	}
	return ;
}

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

static void	ft_get_cost_a(t_node *a, t_node *b)
{
	int		cost;
	t_node	*a_start;

	a_start = a;
	cost = 0;
	while (a)
	{
		cost = 0;
		
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
		a->cost = cost;
		a = a->next;
	}
}

static void	ft_set_cheapest_a(t_node *a)
{
	t_node *cheapest;
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
		current->cheapest = (current == cheapest) ? 1 : 0;
		current = current->next;
	}
}

static void	_ft_set_target_a(t_node *a, t_node *b)
{
	t_node *start_a;
	t_node *start_b;
	int		found;
	
	start_a = a;
	start_b = b;

	while (a)
	{
		b = start_b;
		found = 0;
		while (b)
		{
			if (a->value > b->value)
			{
				a->target = ft_find_max(start_b, a->value);
				found = 1;
				break;
			}
			b = b->next;
		}
		if (found == 0)
			a->target = ft_find_max(start_b, INT32_MAX);
		a = a->next;
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
