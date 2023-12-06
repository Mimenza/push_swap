/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 11:39:00 by emimenza          #+#    #+#             */
/*   Updated: 2023/12/06 13:06:43 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

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
		
	if (0 == ft_init_stack(&a, argv))
		return (0);
	while (a)
	{
		ft_printf("%i ", a->value);
		a = a->next;
	}
	ft_printf("\n");
}