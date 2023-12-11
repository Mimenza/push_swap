/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_sort_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 20:23:08 by emimenza          #+#    #+#             */
/*   Updated: 2023/12/11 11:03:38 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

void	ft_sort_stack(t_node **a, t_node **b)
{
	int len;

	len = ft_stack_len(*a) - 1;
	if (len > 3 && !ft_stack_sorted(*a))
	pb(a, b);
	if (len > 4 && !ft_stack_sorted(*a))
	pb(a, b);
	while (len > 3 && !ft_stack_sorted(*a))
	{
		//Initiate all the nodes of a(cost and target);
		//moves the cheapest node from a; 
	}
	ft_short_three(a);
	while (*b)
	{
		//Initiate all the nodes of b;
		//moves the cheapest node from b; 
	}
	//refresh index of the nodes from a;
	//Ensure smallest number is on top;
}