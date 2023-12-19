/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 11:39:00 by emimenza          #+#    #+#             */
/*   Updated: 2023/12/19 09:49:50 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

int	main(int argc, char **argv)
{
	t_node	*a;
	t_node	*b;
	int		len;

	a = NULL;
	b = NULL;
	if (1 == argc || (2 == argc && !argv[1][0]))
	{
		ft_printf("Wrong numbers of arguments\n");
		return (0);
	}
	else if (2 == argc)
		ft_init_stack(&a, ft_split(argv[1], ' '));
	else
		ft_init_stack(&a, argv + 1);
	len = ft_stack_len(a);
	if (ft_stack_sorted(a) == 0)
	{
		if (len <= 3)
			ft_sort_three(&a);
		else
			ft_sort_stack(&a, &b);
	}
	ft_free_stack(&a);
}
