/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 12:42:03 by emimenza          #+#    #+#             */
/*   Updated: 2023/12/07 12:44:56 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

//Sends the first node to the last position.
void	ft_reverse_rotate_stack(t_node **stack)
{
	t_node	*last;
	int		len;

	len = ft_stack_len(*stack);
	if (NULL == *stack || NULL == stack || 1 == len)
		return ;
	last = ft_last_node(*stack);
	last->prev->next = NULL;
	last->next = *stack;
	last->prev = NULL;
	*stack = last;
	last->next->prev = last;
}