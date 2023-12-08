/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_short3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 19:55:20 by emimenza          #+#    #+#             */
/*   Updated: 2023/12/08 20:18:09 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

void	ft_short_three(t_node **stack)
{
	t_node *max_node;

	max_node = ft_find_max(*stack);
    if(max_node == *stack)
        ra(stack);
    else if ((*stack)->next == max_node)
        rra(stack);
    if ((*stack)->value > (*stack)->next->value)
        sa(stack);
}
