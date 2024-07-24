/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engiacom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 01:16:09 by engiacom          #+#    #+#             */
/*   Updated: 2024/07/21 01:20:45 by engiacom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (!(str[i] >= 32 && str[i] <= 126))
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int main()
{
	char a[] = "\nsdhs";
	char b[] = "djhf1515 '''/';";
	int i;
	printf("%d\n", i = ft_str_is_printable(a));
	printf("%d\n", i = ft_str_is_printable(b));
}*/
