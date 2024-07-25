/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engiacom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 20:36:07 by engiacom          #+#    #+#             */
/*   Updated: 2024/07/19 01:02:54 by engiacom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	res1;
	int	res2;

	res1 = *a / *b;
	res2 = *a % *b;
	*a = res1;
	*b = res2;
}
/*
#include <stdio.h>

int main()
{
	int a;
	int b;

	a = 5;
	b = 2;
	ft_ultimate_div_mod(&a, &b);
	printf("%d,%d\n", a, b);
	
}*/
