/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 14:39:57 by emimenza          #+#    #+#             */
/*   Updated: 2023/09/26 15:07:07 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int			size;
	char		*cpy;
	size_t		i;

	i = 0;
	size = ft_strlen(s1);
	cpy = (char *)malloc(sizeof(*cpy) * (size + 1));
	if (!cpy)
		return (NULL);
	while (s1[i] != '\0')
	{
		cpy[i] = s1[i];
		i++;
	}
	cpy[i] = 0;
	return (cpy);
}

// int main(void)
// {
// 	char *str;

// 	str = "hello world";
// 	printf("Before Allocation: %s\n", str);
// 	printf("After  Allocation: ");
// 	printf("%s\n", ft_strdup(str));
// 	return (0);
// }