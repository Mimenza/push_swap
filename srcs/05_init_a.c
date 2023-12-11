/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_init_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 11:17:49 by emimenza          #+#    #+#             */
/*   Updated: 2023/12/11 13:52:57 by emimenza         ###   ########.fr       */
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
		if (i <= mid)
			(stack)->above_mid = 1;
		else
			(stack)->above_mid = 0;
		i++;
		(stack) = (stack)->next;
	}
	return ;
}

void	ft_set_target_a(t_node *a, t_node *b)
{
	t_node *start_a;
	t_node *start_b;

	start_a = a;
	start_b = b;
	while (a)
	{
		while (b)
		{
			if (a->value > b->value)
			{
				a->target = ft_find_max(b);
				break;
			}
			b = b->next;
		}
		a = a->next;
	}
}

void	ft_init_stack_a(t_node *a, t_node *b)
{
	//set index a (index and mid position)
	ft_set_index(a);
	//set index b (index and mid position)
	ft_set_index(b);
	//set target a
	//get cost of push
	//set cheapest
}
