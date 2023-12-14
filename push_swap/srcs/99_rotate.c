/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   99_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 12:30:21 by emimenza          #+#    #+#             */
/*   Updated: 2023/12/13 17:05:17 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

//Sends the first node to the last position.
static void	ft_rotate_stack(t_node **stack)
{
	int		len;
	t_node	*first;
	t_node	*last;

	len = ft_stack_len(*stack);
	if (stack == NULL || *stack == NULL || len < 2)
		return ;
	first = *stack;
	last = ft_last_node(*stack);
	last->next = first;
	*stack = (*stack)->next;
	(*stack)->prev = NULL;
	first->prev = last;
	first->next = NULL;
}

void	ra(t_node **a)
{
	ft_rotate_stack(a);
	ft_printf("ra\n");
}

void	rb(t_node **b)
{
	ft_rotate_stack(b);
	ft_printf("rb\n");
}

void	rr(t_node **a, t_node **b)
{
	ft_rotate_stack(a);
	ft_rotate_stack(b);
	ft_printf("rr\n");
}
