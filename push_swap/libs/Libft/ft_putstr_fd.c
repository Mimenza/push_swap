/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:36:55 by emimenza          #+#    #+#             */
/*   Updated: 2023/09/27 09:57:11 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Outputs the string ’s’ to the given file
// descriptor.

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
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
//     int fd = open("ft_putstr_fd_test.txt",
// O_RDWR | O_APPEND | O_CREAT, 0777);
//     ft_putstr_fd("Hello World", fd);
//     return (0);
// }