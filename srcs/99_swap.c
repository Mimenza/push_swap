/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 11:56:18 by emimenza          #+#    #+#             */
/*   Updated: 2023/12/08 20:17:58 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

//Swaps the first two nodes of the stack
static void	ft_swap_stack(t_node **stack)
{
	int		len;
	t_node	*first;
	t_node	*second;

	len = ft_stack_len(*stack);
	if (stack == NULL || *stack == NULL || len < 2)
		return ;
	first = *stack;
	second = (*stack)->next;
	first->next = second->next;
	first->prev = second;
	second->next = first;
	second->prev = NULL;
	*stack = second;
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