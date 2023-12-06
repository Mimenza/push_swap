/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:08:59 by emimenza          #+#    #+#             */
/*   Updated: 2023/09/26 15:07:47 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}

// int main()
// {
// 	char str[] = "https://www.youtube.com/";
// 	char ch = '.';
// 	char *ret;

// 	ret = ft_strrchr(str, '.');
// 	printf("String after |%c| is - |%s|\n", ch, ret);
// 	return (0);
// }