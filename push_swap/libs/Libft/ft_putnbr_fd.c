/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:38:00 by emimenza          #+#    #+#             */
/*   Updated: 2023/09/27 09:56:54 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Outputs the integer ’n’ to the given file
// descriptor.

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		n = n * -1;
		write(fd, "-", 1);
	}
	if (n < 10)
	{
		c = n + '0';
		write(fd, &c, 1);
	}
	else
	{
		ft_putnbr_fd((n / 10), fd);
		ft_putnbr_fd((n % 10), fd);
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
//     int fd = open("ft_putnbr_fd_test.txt",
// O_RDWR | O_APPEND | O_CREAT, 0777);
//     ft_putstr_fd("1234", fd);
//     return (0);
// }