/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:35:59 by emimenza          #+#    #+#             */
/*   Updated: 2023/09/27 09:56:31 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Outputs the character ’c’ to the given file
// descriptor.

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// #include <fcntl.h> //para los modes del open
// /*
//     O_RDWR -> open file on read/write
//     O_APPEND -> se situa al final del fichero para escribir
//     O_CREAT -> si no existe el fichero lo crea
//     0777 -> flag para que O_CREAT le de permisos de RWE (777) al fichero
// */
// int main(void)
// {
//     int fd = open("ft_putchar_fd_test.txt", 
//O_RDWR | O_APPEND | O_CREAT, 0777);
//     ft_putstr_fd("H", fd);
//     return (0);
// }