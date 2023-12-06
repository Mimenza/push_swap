/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:33:13 by emimenza          #+#    #+#             */
/*   Updated: 2023/11/09 10:59:07 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Allocates (with malloc(3)) and returns a new
// string, which is the result of the concatenation
// of ’s1’ and ’s2’.

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	char	*ptr2;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	ptr = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	ptr2 = ptr;
	if (!ptr)
		return (NULL);
	while (*s1 != '\0')
		*ptr2++ = *s1++;
	while (*s2 != '\0')
		*ptr2++ = *s2++;
	*ptr2 = '\0';
	return (ptr);
}

// int main(void)
// {
// 	char *str1 = "hello";
// 	char *str2 = " good morning!";

// 	printf("%s", ft_strjoin(str1, str2));
// 	return (0);
// }