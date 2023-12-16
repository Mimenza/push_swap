/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 12:33:00 by emimenza          #+#    #+#             */
/*   Updated: 2023/12/16 15:49:54 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include <stdbool.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>
# include <string.h>
# include "../libs/get_next_line/get_next_line.h"
# include "../../push_swap/libs/ft_printf/ft_printf.h"
# include "../../push_swap/libs/Libft/libft.h"

#define MAX_COMMAND_SIZE 100

# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
# include "../../push_swap/incs/push_swap.h"
# pragma GCC diagnostic pop

#endif
