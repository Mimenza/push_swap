/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_sort_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 20:23:08 by emimenza          #+#    #+#             */
/*   Updated: 2023/12/12 10:45:47 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

static void	ft_check_top(t_node **a)
{
	t_node *min;

	min = ft_find_min(*a, INT_MIN);
	while ((*a)->value != min->value)
	{
		if (min->above_mid == 1)
			ra(a);
		else
			rra(a);
	}
}

void	ft_sort_stack(t_node **a, t_node **b)
{
	int len;

	len = ft_stack_len(*a);
	if (len > 3 && !ft_stack_sorted(*a))
	pb(a, b);
	if (len > 4 && !ft_stack_sorted(*a))
	pb(a, b);
	while (len > 3 && !ft_stack_sorted(*a))
	{
		//Initiate all the nodes of a(cost and target);
		ft_init_stack_a(*a, *b);
		//moves the cheapest node from a;
		ft_move_stack_a(a, b);
		len = ft_stack_len(*a);
	}
	ft_sort_three(a);
	while (*b)
	{
		//Initiate all the nodes of b;
		ft_init_stack_b(*a, *b);
		//moves the cheapest node from b;
		ft_move_stack_b(a, b);
	}
	//refresh index of the nodes from a;
	ft_set_index(*a);
	//Ensure smallest number is on top;
	ft_check_top(a);
}