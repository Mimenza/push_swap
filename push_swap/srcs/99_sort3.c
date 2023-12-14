/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   99_sort3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 19:55:20 by emimenza          #+#    #+#             */
/*   Updated: 2023/12/11 17:56:21 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

void	ft_sort_three(t_node **stack)
{
	t_node	*max_node;

	max_node = ft_find_max(*stack, INT32_MAX);
	if (max_node == *stack)
		ra(stack);
	else if ((*stack)->next == max_node)
		rra(stack);
	if ((*stack)->value > (*stack)->next->value)
		sa(stack);
}
