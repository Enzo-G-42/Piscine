/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engiacom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 00:34:33 by engiacom          #+#    #+#             */
/*   Updated: 2024/07/21 01:19:53 by engiacom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int main()
{
	char a[] = "HHHHHHH";
	char b[] = "ughjdwhb";

	int i;
	printf("%d\n", i = ft_str_is_uppercase(a));
	printf("%d\n", i = ft_str_is_uppercase(b));
}*/
