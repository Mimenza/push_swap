/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 12:56:57 by emimenza          #+#    #+#             */
/*   Updated: 2023/12/18 09:24:09 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*dst2;
	char	*src2;

	i = 0;
	dst2 = (char *)dst;
	src2 = (char *)src;
	if (n == 0 || dst == src)
	{
		return (dst);
	}
	while (i < n)
	{
		dst2[i] = src2[i];
		i++;
	}
	return (dst);
}

// int main(void)
// {
// 	char src[50] = "Hello World";
// 	char dest[50];
// 	char *ret;

// 	ret = ft_memcpy(dest, src, 9);
// 	printf("%s", ret);
// 	return (0);
// }