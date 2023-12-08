/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 11:39:00 by emimenza          #+#    #+#             */
/*   Updated: 2023/12/08 19:05:26 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

void	print_stack(t_node *stack, char *name)
{
	ft_printf("STACK: %s\n", name);
	while (stack)
	{
		ft_printf("--------\n");
		if(stack->prev)
			ft_printf("prev %i \n", stack->prev->value);
		else
			ft_printf("prev NULL\n");
		ft_printf("curr %i \n", stack->value);
		if(stack->next)
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

	a = NULL;
	b = NULL;
	if (1 == argc || (2 == argc && !argv[1][0]))
	{
		ft_printf("Wrong numbers of arguments");
		return (0);
	}
	else if (2 == argc)
		argv = ft_split(argv[1], ' ');
		
	if (0 == ft_init_stack(&a, argv + 1))
		return (0);
	
	print_stack(a, "a");
	ft_printf("\n\n");
	print_stack(b, "b");
	ft_printf("\n");
}