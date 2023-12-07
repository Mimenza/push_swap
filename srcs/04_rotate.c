/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 12:30:21 by emimenza          #+#    #+#             */
/*   Updated: 2023/12/07 12:40:44 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

//Sends the first node to the last position.
void	ft_rotate_stack(t_node **stack)
{
	int		len;
	t_node	*last;

	len = ft_stack_len(*stack);
	if (stack == NULL || *stack == NULL || len < 2)
		return ;
	last = ft_last_node(*stack);
	last->next = *stack;
	*stack = (*stack)->next;
	(*stack)->prev = NULL;
	last->next->prev = last;
	last->next->next = NULL;
}