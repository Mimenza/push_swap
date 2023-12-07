/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 11:56:18 by emimenza          #+#    #+#             */
/*   Updated: 2023/12/07 12:31:34 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

//Swaps the first two nodes of the stack
void	ft_swap_stack(t_node **stack)
{
	int		len;

	len = ft_stack_len(*stack);
	if (stack == NULL || *stack == NULL || len < 2)
		return ;
	*stack = (*stack)->next;
	(*stack)->prev->prev = *stack;
	(*stack)->prev->next = (*stack)->next;
	if ((*stack)->next)
		(*stack)->next->prev = (*stack)->prev;
	(*stack)->next = (*stack)->prev;
	(*stack)->prev = NULL;
}