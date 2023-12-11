/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 11:39:00 by emimenza          #+#    #+#             */
/*   Updated: 2023/12/11 20:49:40 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

void	print_stack(t_node *stack, char *name)
{
	ft_printf("STACK: %s\n", name);
	while (stack)
	{
		ft_printf("--------\n");
		if (stack->prev)
			ft_printf("prev %i \n", stack->prev->value);
		else
			ft_printf("prev NULL\n");
		ft_printf("curr %i \n", stack->value);
		ft_printf("index %i \n", stack->index);
		ft_printf("Above mid %i \n", stack->above_mid);
		if (stack->target != NULL)
			ft_printf("target %i \n", stack->target->value);
		ft_printf("cost %i \n", stack->cost);
		ft_printf("cheap %i \n", stack->cheapest);
		if (stack->next)
			ft_printf("next %i \n", stack->next->value);
		else
			ft_printf("next NULL\n");
		ft_printf("--------\n");
		stack = stack->next;
	}
}

int	main(int argc, char **argv)
{
	t_node	*a;
	t_node	*b;
	int		len;

	a = NULL;
	b = NULL;
	if (1 == argc || (2 == argc && !argv[1][0]))
	{
		ft_printf("Wrong numbers of arguments");
		return (0);
	}
	else if (2 == argc)
	{
		ft_init_stack(&a, ft_split(argv[1], ' '));
	}
	else
		ft_init_stack(&a, argv + 1);
	len = ft_stack_len(a);
	if (ft_stack_sorted(a) == 0)
	{
		if (len == 2)
			sa(&a);
		else if (len == 3)
			ft_sort_three(&a);
		else
			ft_sort_stack(&a, &b);
	}
	print_stack(a, "A");
	ft_printf("\n\n");
	print_stack(b, "B");
	ft_free_stack(&a);
}
