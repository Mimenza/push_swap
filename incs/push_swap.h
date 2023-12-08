/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 11:39:51 by emimenza          #+#    #+#             */
/*   Updated: 2023/12/08 18:43:45 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libs/ft_printf/ft_printf.h"
# include "../libs/Libft/libft.h"

# define INT_MAX 2147483647
# define INT_MIN -2147483647

typedef struct s_node
{
	int					value;
	struct s_node		*next;
	struct s_node		*prev;
}				t_node;

//init_stack
int		ft_init_stack(t_node **stack, char **argv);
int		ft_repeated(t_node *stack, int nbr);

//utils_stack
t_node	*ft_last_node(t_node *stack);
void	ft_add_to_stack(t_node **stack, int nbr);
void	ft_free_stack(t_node **stack);
int		ft_stack_len(t_node *stack);

//swap
static void	ft_swap_stack(t_node **stack);
void	sa(t_node **a);
void	sb(t_node **b);
void	ss(t_node **a, t_node **b);

//rotate
static void	ft_rotate_stack(t_node **stack);
void	ra(t_node **a);
void	rb(t_node **b);
void	rr(t_node **a, t_node **b);

//reverse rotate
static void	ft_reverse_rotate_stack(t_node **stack);
void	rra(t_node **a);
void	rrb(t_node **b);
void	rrr(t_node **a, t_node **b);

//push a node from a stack to another
static void ft_push_stack(t_node **src, t_node **dst);
void    pa(t_node **a, t_node **b);
void    pb(t_node **a, t_node **b);

#endif