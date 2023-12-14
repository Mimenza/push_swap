/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:04:19 by emimenza          #+#    #+#             */
/*   Updated: 2023/09/26 14:59:49 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	s_src;
	size_t	s_dest;
	size_t	i;

	s_src = ft_strlen(src);
	s_dest = ft_strlen(dst);
	i = 0;
	if (s_dest < dstsize)
		s_src += s_dest;
	else
		s_src += dstsize;
	if (dstsize > 0)
	{
		while (*(src + i) && (i + s_dest) < dstsize - 1)
		{
			*(dst + i + s_dest) = *(src + i);
			i++;
		}
		*(dst + s_dest + i) = '\0';
	}
	return (s_src);
}

// int main()
// {
// 	char s1[10] = "hello";
// 	printf("%zu", ft_strlcat(s1, "cat", 0));
// 	return (0);
// }