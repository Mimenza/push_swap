/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   07_init_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 09:22:45 by emimenza          #+#    #+#             */
/*   Updated: 2023/12/13 15:51:38 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

static void	ft_set_target_b(t_node *a, t_node *b)
{
	while (b)
	{
		b->target = ft_find_min(a, b->value);
		if (b->target == NULL)
			b->target = ft_find_min(a, INT_MIN);
		b = b->next;
	}
}

void	ft_init_stack_b(t_node *a, t_node *b)
{
	ft_set_index(a);
	ft_set_index(b);
	ft_set_target_b(a, b);
}
