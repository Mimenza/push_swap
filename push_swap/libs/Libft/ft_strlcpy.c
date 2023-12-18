/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:00:03 by emimenza          #+#    #+#             */
/*   Updated: 2023/12/18 09:23:54 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	count;
	size_t	i;

	count = ft_strlen(src);
	i = 0;
	if (dstsize != 0)
	{
		while (src[i] != '\0' && i < (dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (count);
}

// int main(void)
// {
// 	char dst[50];
// 	char *src = "hello world";

// 	printf("dst size: %zu \n", ft_strlcpy(dst, src, 10));

// 	printf("result: %s \n", dst);
// }