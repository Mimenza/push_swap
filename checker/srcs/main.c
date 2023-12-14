/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 12:31:13 by emimenza          #+#    #+#             */
/*   Updated: 2023/12/14 12:53:01 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/checker.h"

static int	ft_strcmp(char *str_1, char *str_2)
{
	while (*str_1 == *str_2
		&& *str_1)
	{
		++str_1;
		++str_2;
	}
	return (*str_1 - *str_2);
}

static void	error(t_node **a, t_node **b)
{
	ft_free_stack(a);
	ft_free_stack(b);
	write(2, "Error\n", 6);
	exit(1);
}

static void	parse_command(t_node **a, t_node **b, char *command)
{
	if (!ft_strcmp(command, "pa\n"))
		pa(a, b);
	else if (!ft_strcmp(command, "pb\n"))
		pb(b, a);
	else if (!ft_strcmp(command, "sa\n"))
		sa(a);
	else if (!ft_strcmp(command, "sb\n"))
		sb(b);
	else if (!ft_strcmp(command, "ss\n"))
		ss(a, b);
	else if (!ft_strcmp(command, "ra\n"))
		ra(a);
	else if (!ft_strcmp(command, "rb\n"))
		rb(b);
	else if (!ft_strcmp(command, "rr\n"))
		rr(a, b);
	else if (!ft_strcmp(command, "rra\n"))
		rra(a);
	else if (!ft_strcmp(command, "rrb\n"))
		rrb(b);
	else if (!ft_strcmp(command, "rrr\n"))
		rrr(a, b);
	else
		error(a, b);
}
int	main(int argc, char **argv)
{
	t_node	*a;
	t_node	*b;
	int		len;
	char	*next_line;

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
	next_line = get_next_line(STDIN_FILENO);
	while (next_line)
	{
		parse_command(&a, &b, next_line);
		next_line = get_next_line(STDIN_FILENO);
	}
	if (ft_stack_sorted(a) == 1 && ft_stack_len(a) == len)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	free(a);
}