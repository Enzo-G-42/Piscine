/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engiacom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 17:55:51 by engiacom          #+#    #+#             */
/*   Updated: 2024/07/28 20:36:43 by engiacom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	else if (nb == 2)
		return (1);
	i = 2;
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
/* 
#include <stdio.h>

int main()
{
	//int nb = 3;
	//int res = ft_is_prime(nb);
	//printf("%d\n", res);
	int x = ft_is_prime(3);
	printf("%d\n", x);
} */
