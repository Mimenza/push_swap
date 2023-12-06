/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 09:36:16 by emimenza          #+#    #+#             */
/*   Updated: 2023/09/26 15:01:10 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		diff;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (s1[i] != '\0' && s1[i] == s2[i] && i < n - 1)
	{
		i++;
	}
	diff = (unsigned char)s1[i] - (unsigned char)s2[i];
	return (diff);
}

// int main(void)
// {
// 	char *s1;
// 	char *s2;

// 	s1 = "zyxbcdefgh";
// 	s2 = "abcdwxyz";
// 	printf("%d", ft_strncmp(s1, s2, 0));
// 	return (0);
// }