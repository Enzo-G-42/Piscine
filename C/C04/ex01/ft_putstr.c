/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engiacom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 22:08:14 by engiacom          #+#    #+#             */
/*   Updated: 2024/07/28 14:11:05 by engiacom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}
/* 
int main()
{
	ft_putstr("Coucou");
} */
/* 
int main()
{
	write(1, "l\n", 2);
} */

/* str1 "ABC"  str2 "CBA"
str2[i] = str1[i] i++;
ABC 
swap
a = str[0]
str[0] = str[2]
str[2] = a
 */