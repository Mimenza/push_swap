/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 09:58:37 by emimenza          #+#    #+#             */
/*   Updated: 2023/09/27 09:44:52 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		j;

	i = 0;
	if (*needle == '\0' || needle == NULL)
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (needle[j] == haystack[i + j] && i + j < len)
		{
			if (needle[j + 1] == '\0')
			{
				return ((char *)haystack + i);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}

// int main()
// {
// 	char haystack[20] = "hello world";
// 	char needle[10] = "llo";
// 	char *ret;

// 	ret = ft_strnstr("abc", "abcdef", 3);

// 	printf("%s\n", ret);
// 	printf("%s", ft_strnstr("lorem ipsum dolor sit amet", "dolor", 17));

// 	return (0);
// }