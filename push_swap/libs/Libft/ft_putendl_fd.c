/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:37:31 by emimenza          #+#    #+#             */
/*   Updated: 2023/09/27 09:56:39 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Outputs the string ’s’ to the given file descriptor
// followed by a newline.

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd, "\n", 1);
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
//     int fd = open("ft_putendl_fd_test.txt",
// O_RDWR | O_APPEND | O_CREAT, 0777);
//     ft_putstr_fd("H", fd);
//     return (0);
// }