/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engiacom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 22:57:31 by engiacom          #+#    #+#             */
/*   Updated: 2024/07/21 01:14:40 by engiacom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (!((str[i] >= 'A' && str[i] <= 'Z')
				|| (str[i] >= 'a' && str[i] <= 'z')))
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int main()
{
	char *str = "Cou1Cou";
	char *str2 = "CouCou";
	int i = ft_str_is_alpha(str);
	int y = ft_str_is_alpha(str2);
	printf("%d\n%d\n", i, y);
}*/
