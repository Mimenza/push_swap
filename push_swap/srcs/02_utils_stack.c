/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_utils_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 12:40:10 by emimenza          #+#    #+#             */
/*   Updated: 2023/12/11 18:13:15 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

t_node	*ft_last_node(t_node *stack)
{
	while (stack)
	{
		if (!stack->next)
			return (stack);
		stack = stack->next;
	}
	return (stack);
}

int	ft_stack_len(t_node *stack)
{
	int	i;

	i = 0;
	while (stack)
	{
		stack = stack->next;
		i++;
	}
	return (i);
}

int	ft_stack_sorted(t_node *stack)
{
	if (!stack)
		return (-1);
	while (stack->next)
	{
		if (stack->value > stack->next->value)
			return (0);
		stack = stack->next;
	}
	return (1);
}

t_node	*ft_find_min(t_node *stack, int min_value)
{
	long	min;
	t_node	*min_node;

	if (!stack)
		return (NULL);
	min = INT_MAX;
	min_node = NULL;
	while (stack)
	{
		if (stack->value < min && stack->value > min_value)
		{
			min = stack->value;
			min_node = stack;
		}
		stack = stack->next;
	}
	return (min_node);
}

t_node	*ft_find_max(t_node *stack, int max_value)
{
	long	max;
	t_node	*max_node;

	if (!stack)
		return (NULL);
	max = INT_MIN;
	max_node = NULL;
	while (stack)
	{
		if (stack->value > max && stack->value < max_value)
		{
			max = stack->value;
			max_node = stack;
		}
		stack = stack->next;
	}
	return (max_node);
}
