/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engiacom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 16:30:59 by engiacom          #+#    #+#             */
/*   Updated: 2024/07/23 19:39:29 by engiacom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/* 
#include <stdio.h>

int main()
{
	char a[] = "Bonjour5";
	char b[] = "Bonjour";
	int i = 0;

	i = ft_strcmp(a, b);
	printf("%d\n", i);
} */