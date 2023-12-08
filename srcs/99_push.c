/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 18:26:04 by emimenza          #+#    #+#             */
/*   Updated: 2023/12/08 20:18:07 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

//Sends the first node fo src to the first position of dst
static void ft_push_stack(t_node **src, t_node **dst)
{
    t_node *first_src;
    t_node *first_dst;

    if (*src == NULL)
        return ;
    first_src = *src;
    first_dst = *dst;
    *src = first_src->next;
    if (first_src->next)
        first_src->next->prev = NULL;
    first_src->next = first_dst;
    first_src->prev = NULL;
    if (first_dst)
        first_dst->prev = first_src;
    *dst = first_src;
}

void    pa(t_node **a, t_node **b)
{
    ft_push_stack(b, a);
    printf("pa\n");
}

void    pb(t_node **a, t_node **b)
{
    ft_push_stack(a, b);
    printf("pb\n");
}
