/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 16:05:44 by emimenza          #+#    #+#             */
/*   Updated: 2023/11/09 16:50:46 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdint.h>

int		ft_printf(const char *str, ...);
void	ft_getformat(va_list args, char const sign, int *length);
void	ft_printchar(int c, int *length);
void	ft_printnbr(int nb, int *len);
void	ft_printstring(char *str, int *length);
void	ft_printchar(int c, int *length);
void	ft_to_base(int num, char *base, int *length);
void	ft_printu(unsigned int nb, int *len);
void	ft_printptr(unsigned long long int ptr, int *len);
void	ft_printnbr_base_ptr(uintptr_t nbr, char *base, int *len);

#endif