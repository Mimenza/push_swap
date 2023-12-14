/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 09:58:49 by emimenza          #+#    #+#             */
/*   Updated: 2023/09/26 15:05:40 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*chr;
	size_t				i;

	i = 0;
	chr = (const unsigned char *)s;
	while (i < n)
	{
		if (chr[i] == (unsigned char)c)
			return ((void *)(s + i));
		i++;
	}
	return (NULL);
}

// int main(void)
// {
// 	char src[50] = "Hello World";
// 	char *ret;

// 	ret = ft_memchr(src, 's', 15);
// 	printf("%s", ret);
// 	return (0);
// }