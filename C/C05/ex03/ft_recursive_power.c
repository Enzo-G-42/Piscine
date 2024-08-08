/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engiacom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 17:23:23 by engiacom          #+#    #+#             */
/*   Updated: 2024/07/28 22:36:28 by engiacom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	i;

	i = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power != 1)
	{
		nb = nb * ft_recursive_power(i, power - 1);
	}
	return (nb);
}
/* 
#include <stdio.h>

int main()
{
	int nb = 5;
	int power = 3;
	int res = ft_recursive_power(nb, power);
	printf("%d\n", res);
} */