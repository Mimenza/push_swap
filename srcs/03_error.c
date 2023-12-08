/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 19:54:36 by emimenza          #+#    #+#             */
/*   Updated: 2023/12/08 20:21:31 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

void	ft_free_stack(t_node **stack)
{
	t_node	*tmp;
	t_node	*current;

	if (NULL == stack)
		return ;
	current = *stack;
	while (current)
	{
		tmp = current->next;
		free(current);
		current = tmp;
	}
	*stack = NULL;
}

int	ft_repeated(t_node *stack, int nbr)
{
	if (stack == NULL)
		return (0);
	while (stack)
	{
		if (stack->value == nbr)
			return (1);
		stack = stack->next;
	}
	return (0);
}