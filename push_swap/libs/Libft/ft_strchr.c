/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:13:15 by emimenza          #+#    #+#             */
/*   Updated: 2023/09/26 15:06:59 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *) s);
		s++;
	}
	if ((char)c == *s)
		return ((char *) s);
	return (NULL);
}

// int main()
// {
// 	char str[] = "https://www.youtube.com/";
// 	char ch = '.';
// 	char *ret;

// 	ret = ft_strchr(str, ch);
// 	printf("String after |%c| is - |%s|\n", ch, ret);
// 	return (0);
// }