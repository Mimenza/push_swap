/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 12:31:13 by emimenza          #+#    #+#             */
/*   Updated: 2023/12/19 10:10:41 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/checker.h"

int	ft_check_digit(char **argv)
{
	int	j;
	int	i;

	i = 0;
	while (argv[i] != '\0')
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (!ft_isdigit(argv[i][j]))
			{
				ft_printf("Error\n");
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
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
	if (!ft_strncmp(command, "pa\n", INT32_MAX))
		pa(a, b, 0);
	else if (!ft_strncmp(command, "pb\n", INT32_MAX))
		pb(a, b, 0);
	else if (!ft_strncmp(command, "sa\n", INT32_MAX))
		sa(a, 0);
	else if (!ft_strncmp(command, "sb\n", INT32_MAX))
		sb(b, 0);
	else if (!ft_strncmp(command, "ss\n", INT32_MAX))
		ss(a, b, 0);
	else if (!ft_strncmp(command, "ra\n", INT32_MAX))
		ra(a, 0);
	else if (!ft_strncmp(command, "rb\n", INT32_MAX))
		rb(b, 0);
	else if (!ft_strncmp(command, "rr\n", INT32_MAX))
		rr(a, b, 0);
	else if (!ft_strncmp(command, "rra\n", INT32_MAX))
		rra(a, 0);
	else if (!ft_strncmp(command, "rrb\n", INT32_MAX))
		rrb(b, 0);
	else if (!ft_strncmp(command, "rrr\n", INT32_MAX))
		rrr(a, b, 0);
	else
		error(a, b);
}

void	ft_check_and_print(t_node **a, int len)
{
	if (ft_stack_sorted(*a) == 1 && ft_stack_len(*a) == len)
		ft_printf("\033[0;32mOK\033[0m\n");
	else
		ft_printf("\033[0;31mKO\033[0m\n");
}

int	main(int argc, char **argv)
{
	t_node	*a;
	t_node	*b;
	int		len;
	char	*next_line;

	a = NULL;
	b = NULL;
	if (1 == argc || (2 == argc && !argv[1][0]) || ft_check_digit(argv) == 0)
	{
		ft_printf("Error\n");
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
	ft_check_and_print(&a, len);
	free(a);
}
