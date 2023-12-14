/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:35:29 by emimenza          #+#    #+#             */
/*   Updated: 2023/09/25 13:15:42 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Applies the function ’f’ on each character of
// the string passed as argument, passing its index
// as first argument. Each character is passed by
// address to ’f’ to be modified if necessary.

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	long int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

// void my_func(unsigned int i, char *str)
// {
// 	printf("My inner function: index = %d and the string is %s\n", i, str);
// }

// int main()
// {
// 	char str[10] = "Hello.";
// 	printf("The result is %s\n", str);
// 	ft_striteri(str, my_func);
// 	printf("The result is %s\n", str);
// 	return 0;
// }
