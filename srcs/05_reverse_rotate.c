/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 12:42:03 by emimenza          #+#    #+#             */
/*   Updated: 2023/12/08 18:23:10 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

//Sends the last node to the first position.
static void	ft_reverse_rotate_stack(t_node **stack)
{
	int		len;
	t_node	*first;
	t_node	*last;

	len = ft_stack_len(*stack);
	if (NULL == *stack || NULL == stack || 1 == len)
		return ;
	first = *stack;
	last = ft_last_node(*stack);
	last->prev->next = NULL;
	last->next = first;
	last->prev = NULL;
	*stack = last;
	first->prev = last;
}

void	rra(t_node **a)
{
	ft_reverse_rotate_stack(a);
	printf("rra\n");
}

void	rrb(t_node **b)
{
	ft_reverse_rotate_stack(b);
	printf("rrb\n");
}

void	rrr(t_node **a, t_node **b)
{
	ft_reverse_rotate_stack(a);
	ft_reverse_rotate_stack(b);
	printf("rrr\n");
}