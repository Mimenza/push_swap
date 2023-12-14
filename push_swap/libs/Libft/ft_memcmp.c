/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 10:48:38 by emimenza          #+#    #+#             */
/*   Updated: 2023/09/26 15:06:01 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1_2;
	unsigned char	*s2_2;
	size_t			i;

	i = 0;
	s1_2 = (unsigned char *)s1;
	s2_2 = (unsigned char *)s2;
	while (i < n)
	{
		if (s1_2[i] != s2_2[i])
			return ((int)s1_2[i] - (int)s2_2[i]);
		i++;
	}
	return (0);
}

// int main(void)
// {
// 	char str1[50] = "Hello World";
// 	char str2[50] = "Hello World";
// 	int n = 14;
// 	printf("%d", ft_memcmp(str1, str2, n));
// 	return (0);
// }