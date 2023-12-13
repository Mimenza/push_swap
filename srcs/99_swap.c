/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   99_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 11:56:18 by emimenza          #+#    #+#             */
/*   Updated: 2023/12/13 17:05:09 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

//Swaps the first two nodes of the stack
static void	ft_swap_stack(t_node **stack)
{
	int	len;

	len = ft_stack_len(*stack);
	if (NULL == *stack || NULL == stack || 1 == len)
		return ;
	*stack = (*stack)->next;
	(*stack)->prev->prev = *stack;
	(*stack)->prev->next = (*stack)->next;
	if ((*stack)->next)
		(*stack)->next->prev = (*stack)->prev;
	(*stack)->next = (*stack)->prev;
	(*stack)->prev = NULL;
}

void	sa(t_node **a)
{
	ft_swap_stack(a);	
	printf("sa\n");
}

void	sb(t_node **b)
{
	ft_swap_stack(b);
	printf("sb\n");
}

void	ss(t_node **a, t_node **b)
{
	ft_swap_stack(a);
	ft_swap_stack(b);
	printf("ss\n");
}
