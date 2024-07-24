/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engiacom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 00:14:29 by engiacom          #+#    #+#             */
/*   Updated: 2024/07/21 01:17:38 by engiacom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int main()
{
	char a[] = "sjdgdHHHHHHjnd";
	char b[] = "ughjdwhb";

	int i;
	printf("%d\n", i = ft_str_is_lowercase(a));
	printf("%d\n", i = ft_str_is_lowercase(b));
}*/
