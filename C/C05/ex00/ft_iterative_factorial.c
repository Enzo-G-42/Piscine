/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engiacom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 16:48:30 by engiacom          #+#    #+#             */
/*   Updated: 2024/07/28 22:29:16 by engiacom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = nb - 1;
	if (nb == 1 || nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	while (i > 0)
	{
		nb = nb * i;
		i--;
	}
	return (nb);
}
/* 
#include <stdio.h>

int main()
{
	int nb = 1;
	int res = ft_iterative_factorial(nb);
	printf("%d\n", res);
} */